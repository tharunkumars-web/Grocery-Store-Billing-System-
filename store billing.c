#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Item {
    char name[50];
    float price;
    int quantity;
    float total;
};

void generateBill(struct Item items[], int count, float discount, float tax) {
    FILE *fp;
    time_t t;
    time(&t);
    float subtotal = 0, total = 0, discountAmount, taxAmount;
    fp = fopen("bill.txt", "w");

    fprintf(fp, "\n\t\tGROCERY STORE BILL\n");
    fprintf(fp, "------------------------------------------------------------\n");
    fprintf(fp, "%-20s %-10s %-10s %-10s\n", "Item", "Price", "Qty", "Total");
    fprintf(fp, "------------------------------------------------------------\n");

    for (int i = 0; i < count; i++) {
        items[i].total = items[i].price * items[i].quantity;
        subtotal += items[i].total;
        fprintf(fp, "%-20s %-10.2f %-10d %-10.2f\n", items[i].name, items[i].price, items[i].quantity, items[i].total);
    }

    discountAmount = subtotal * (discount / 100);
    taxAmount = (subtotal - discountAmount) * (tax / 100);
    total = subtotal - discountAmount + taxAmount;

    fprintf(fp, "------------------------------------------------------------\n");
    fprintf(fp, "Subtotal: %.2f\n", subtotal);
    fprintf(fp, "Discount (%.0f%%): -%.2f\n", discount, discountAmount);
    fprintf(fp, "Tax (%.0f%%): +%.2f\n", tax, taxAmount);
    fprintf(fp, "------------------------------------------------------------\n");
    fprintf(fp, "Total Bill: %.2f\n", total);
    fprintf(fp, "Date/Time: %s", ctime(&t));
    fprintf(fp, "------------------------------------------------------------\n");

    fclose(fp);
    printf("\nBill generated successfully! Check 'bill.txt'\n");
}

int main() {
    struct Item items[50];
    int n;
    float discount, tax;

    printf("Enter number of items purchased: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid number of items.\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        printf("\nEnter item name: ");
        scanf("%s", items[i].name);
        printf("Enter price: ");
        scanf("%f", &items[i].price);
        printf("Enter quantity: ");
        scanf("%d", &items[i].quantity);

        if (items[i].quantity < 0 || items[i].price < 0) {
            printf("Invalid input. Please enter positive values.\n");
            return 0;
        }
    }

    printf("\nEnter discount percentage: ");
    scanf("%f", &discount);
    printf("Enter tax percentage: ");
    scanf("%f", &tax);

    generateBill(items, n, discount, tax);
    return 0;
}

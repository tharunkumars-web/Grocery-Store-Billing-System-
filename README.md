# 🛒 Grocery Store Billing System

A simple **console-based Grocery Store Billing System** developed using the **C programming language**. The project automates basic grocery billing by accepting item details, calculating subtotals, applying discounts and taxes, generating a formatted bill, and saving the bill to a text file with a timestamp.

## 📌 Project Overview

Manual billing can lead to calculation errors, delays, and difficulty maintaining previous transaction records.

This project provides a simple solution by automating the billing process using core C programming concepts such as:

* Structures
* Arrays
* Loops
* Functions
* Conditional statements
* File handling
* Input validation
* Mathematical calculations
* Timestamping

The generated bill contains the item name, price, quantity, individual total, subtotal, discount, tax, final bill amount, and date/time.

---

## ✨ Features

* 🧾 Generate grocery bills automatically
* 📦 Enter multiple grocery items
* 💰 Calculate item-wise totals
* ➕ Calculate subtotal automatically
* 🏷️ Apply discount percentage
* 🧮 Calculate tax percentage
* 💵 Calculate final payable amount
* ✅ Validate price and quantity inputs
* 📄 Save the generated bill to `bill.txt`
* 🕒 Add date and time to the bill
* 📋 Display the bill in a clean, readable format
* ⚠️ Handle invalid input and file-access errors

These features are implemented using structures, loops, arrays, functions, file handling, validation, and mathematical computations.

---

## 🛠️ Technologies Used

| Technology           | Purpose                         |
| -------------------- | ------------------------------- |
| **C**                | Core programming language       |
| **GCC / C Compiler** | Compile and execute the program |
| **File Handling**    | Store generated billing records |
| **Structures**       | Store item information          |
| **Arrays**           | Manage multiple items           |
| **Time Library**     | Generate bill timestamps        |

### C Libraries Used

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
```

The project uses a `struct Item` to store the item name, price, quantity, and calculated total.

---

## 🔄 How It Works

The billing process follows these steps:

```text
Start
  ↓
Enter number of items
  ↓
Enter item name, price & quantity
  ↓
Validate input
  ↓
Calculate item total
  ↓
Calculate subtotal
  ↓
Apply discount
  ↓
Calculate tax
  ↓
Calculate final bill
  ↓
Generate formatted bill
  ↓
Save bill to bill.txt
  ↓
End
```

The algorithm calculates each item total as:

```text
Item Total = Price × Quantity
```

Then:

```text
Discount Amount = Subtotal × (Discount / 100)

Tax Amount = (Subtotal - Discount Amount) × (Tax / 100)

Final Total = Subtotal - Discount Amount + Tax Amount
```

The implementation follows the methodology described in the project report.

---

## 💻 Example

### Input

```text
Enter number of items purchased: 2

Enter item name: soap
Enter price: 2
Enter quantity: 1

Enter item name: oil
Enter price: 5
Enter quantity: 1

Enter discount percentage: 5
Enter tax percentage: 0
```

### Generated Bill

```text
                    GROCERY STORE BILL
------------------------------------------------------------
Item                 Price      Qty        Total
------------------------------------------------------------
soap                 2.00       1          2.00
oil                  5.00       1          5.00
------------------------------------------------------------
Subtotal: 7.00
Discount (5%): -0.35
Tax (0%): +0.00
------------------------------------------------------------
Total Bill: 6.65
Date/Time: Sat Jul 18 22:52:05 2026
------------------------------------------------------------
```

This example is from the generated output of the project.

---

## 📂 Project Structure

```text
Grocery-Store-Billing-System/
│
├── store billing.c
├── bill.txt
├── README.md
└── store billing.exe
```

> **Note:** The `.exe` file is optional. It can be included if you want to provide a precompiled Windows version.

---

## 🚀 How to Run

### 1. Clone the Repository

```bash
git clone YOUR_GITHUB_REPOSITORY_URL
```

### 2. Open the Project Folder

```bash
cd Grocery-Store-Billing-System
```

### 3. Compile the Program

Using GCC:

```bash
gcc "store billing.c" -o "store billing"
```

### 4. Run the Program

On Windows:

```bash
"store billing.exe"
```

Or, if you compiled it yourself:

```bash
"store billing"
```

---

## 🧪 Testing

The program was tested with different item inputs to verify:

* Item total calculations
* Subtotal calculation
* Discount calculation
* Tax calculation
* Final bill calculation
* Input validation
* Bill generation
* File storage
* Timestamp generation

The program writes the generated bill to `bill.txt` using file handling.

---

## 🎯 Project Objectives

The main objectives of this project are:

1. Reduce manual calculation errors.
2. Make the billing process faster and more accurate.
3. Apply C programming concepts to a real-world problem.
4. Store and retrieve billing information.
5. Generate an organized and readable bill.

---

## 🔮 Future Improvements

The project can be further enhanced with:

* 🖥️ Graphical User Interface (GUI)
* 🗄️ Database integration
* 📦 Inventory management
* 📷 Barcode scanning
* 💳 Digital payment integration
* 🧾 Automatic receipt printing
* 👤 Customer information management
* 📊 Sales and billing reports

These improvements are proposed as future work in the project report.

---

## 👨‍💻 Project Team

**Grocery Store Billing System**

Programming in C Laboratory Project

* **Sharvesh C**
* **Tholkappiyan R**
* **Tharun Kumar S**

**Sri Ramachandra Faculty of Engineering and Technology**
Sri Ramachandra Institute of Higher Education and Research
Porur, Chennai, Tamil Nadu

Academic Year: **2025–2026**

---

## 📚 References

1. E. Balagurusamy — *Programming in ANSI C*
2. Yashavant P. Kanetkar — *Let Us C*
3. Herbert Schildt — *C: The Complete Reference*
4. Byron Gottfried — *Programming with C*
5. Kernighan & Ritchie — *The C Programming Language*

---

## ⭐ Project

If you find this project useful for learning C programming, feel free to ⭐ the repository.

**Built with ❤️ using C**

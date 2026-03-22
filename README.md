Here’s your **README snippet updated with emojis** to make it more visually appealing and engaging for GitHub:

---

# 🖥️ C++ Calculator Project

A simple console-based calculator implemented in C++ using a class-based approach. Supports basic arithmetic operations, modulus, power, and square root with input validation (e.g., division by zero, square root of negative numbers).

---

## 📂 Project Structure

| Filename         | Description                                                                                                                                                                            |
| ---------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| `calculator.h`   | Header file containing the `Calculator` class declaration (private members, public methods, and include guards). 📄                                                                    |
| `calculator.cpp` | Implementation file for the `Calculator` class (method definitions for `setValues`, `addition`, `subtraction`, `multiplication`, `division`, `modulus`, `power`, and `squareRoot`). ⚙️ |
| `main.cpp`       | Main program file with user interface: input for two numbers, menu-driven operation selection (switch-case), and result display. 🖱️                                                   |

---

## 🚀 Features

* **Operations** (menu choices 1–7):

  1. Addition ➕
  2. Subtraction ➖
  3. Multiplication ✖️
  4. Division ➗ (checks for division by zero)
  5. Modulus (%) using `fmod` 🧮
  6. Power (using `pow`) 🔺
  7. Square Root (of first number only; checks for negative input) √
* Error handling with clear console messages ⚠️
* Uses `float` for calculations 🔢
* Clean, object-oriented design with separate header/implementation files 🧩

---

## 💻 How to Compile & Run

### Prerequisites

* Any C++ compiler (g++, Visual Studio, etc.) 💻
* Required headers: `<iostream>`, `<cmath>` 📚

### Compilation (using g++)

```bash
g++ -o calculator main.cpp calculator.cpp  # Compile and link
./calculator                             # Run on Linux / macOS
calculator.exe                           # Run on Windows
```

---


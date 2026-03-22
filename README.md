C++ Calculator Project

A console-based calculator implemented in C++ using Object-Oriented Programming (OOP). Supports basic arithmetic operations, modulus, power, and square root with input validation (e.g., division by zero, square root of negative numbers).

📂 Project Structure
Filename	Description
calculator.h	Header file containing the Calculator class declaration (private members, public methods, include guards).
calculator.cpp	Implementation file for the Calculator class (method definitions for setValues, addition, subtraction, multiplication, division, modulus, power, squareRoot).
main.cpp	Main program file with user interface: input for two numbers, menu-driven operation selection, and result display.
🚀 Features
Operations (menu choices 1–7):
Addition
Subtraction
Multiplication
Division (checks for division by zero)
Modulus (using fmod)
Power (using pow)
Square Root (first number only; checks for negative input)
Error handling with clear console messages
Uses float for calculations
Clean, modular OOP design with separate header and implementation files
💻 How to Compile & Run
Using g++ (Linux / macOS)
g++ -o calculator main.cpp calculator.cpp
./calculator
Using Windows (with g++)
g++ -o calculator.exe main.cpp calculator.cpp
calculator.exe
🛠 Prerequisites
Any C++ compiler (g++, Visual Studio, etc.)
Required headers: <iostream>, <cmath>

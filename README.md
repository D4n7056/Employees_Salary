# Employee Salary System

This is a simple C++ project that calculates employee salaries using **object-oriented programming**. 

It uses **inheritance**, **virtual functions**, and separates code into ".h" and ".cpp" files to keep things clean.

the stucture is:
employeesSalaries/
|-- include/ 
| |-- Employee.h
| |-- Boss.h
| |__ CommisionWorker.h
|
|-- src/
| |-- Employee.cpp
| |-- Boss.cpp
| |__ CommisionWorker.cpp
|
|__ main.cpp # Main program


## What It Does
- Defines a base class: "Employee"
- Two types of employees:
  - "Boss": has a fixed bonus
  - "CommisionWorker": gets extra pay for each product sold
- Each class has its own version of "calculateSalary()"
- Prints a simple salary report with "printSalary()"

## How to Compile

If you're in the folder employeesSalaries/ of the project, run:
g++ -Iinclude -o salaryTry main.cpp src/Employee.cpp src/Boss.cpp src/CommisionWorker.cpp

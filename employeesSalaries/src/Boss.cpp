#include <iostream>
#include "../include/Boss.h"


using namespace std;

Boss::Boss(string _name, int _workingDays, float _baseSalary, float _salaryBonus)
: Employee(_name, "Boss", _workingDays, _baseSalary), salaryBonus(_salaryBonus > 0 ? _salaryBonus : 0) {}

float Boss::calculateSalary(){
    return ((workingDays*baseSalary) + salaryBonus);
}

string Boss::printSalary(){
    return std::string("--- Details of the employee's salary ---\n") + 
    "Name: " + name + "\n" +
    "Type: " + type + "\n" + 
    "Base salary: " + to_string(baseSalary) + "\n" +
    "Salary bonus: " + to_string(salaryBonus) + "\n";
}

float Boss::getSalaryBonus(){
    return salaryBonus;
}

void Boss::setSalaryBonus(float _salaryBonus){
    salaryBonus = _salaryBonus;
}
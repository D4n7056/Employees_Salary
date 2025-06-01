#include <iostream>
#include "../include/Employee.h"

using namespace std;

Employee::Employee(string _name, string _type, int _workingDays, float _baseSalary)
: name(_name), type(_type), workingDays(_workingDays), baseSalary(_baseSalary) {};

float Employee::calculateSalary(){
    return workingDays*baseSalary;
}

string Employee::printSalary(){
    return std::string("--- Details of the employee's salary --- \n") + 
    "Name: " + name + "\n" +
    "Type: " + type+ "\n" +
    "Working Days: " + to_string(workingDays) + "\n" +
    "Salary: " + to_string(calculateSalary()) + "\n";
}

string Employee::getName(){
    return name;
}
string Employee::getType(){
    return type;
}
int Employee::getWorkingDays(){
    return workingDays;
}
float Employee::getBaseSalary(){
    return baseSalary;
}

void Employee::setName(std::string _name){
    name = _name;
}
void Employee::setType(std::string _type){
    type = _type;
}
void Employee::setWorkingDays(int _workingDays){
    workingDays = _workingDays;
}
void Employee::setBaseSalary(float _baseSalary){
    baseSalary = _baseSalary;
}
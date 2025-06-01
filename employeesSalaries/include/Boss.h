#include <iostream>
#include "Employee.h"

#ifndef BOSS_H
#define BOSS_H

class Boss : public Employee {
    private:
        float salaryBonus;
    
    public:
        Boss(std::string _name, int _workingDays, float _baseSalary, float _salaryBonus);
        
        float calculateSalary() override;
        std::string printSalary() override;

        float getSalaryBonus();

        void setSalaryBonus(float _salaryBonus);
};

#endif
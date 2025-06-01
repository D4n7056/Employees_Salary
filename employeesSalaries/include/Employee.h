#include <iostream>

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee{
    protected:
        std::string name;
        std::string type;
        int workingDays;
        float baseSalary;

    public:
        Employee(std::string _name, std::string _type, int _workingDays, float _baseSalary);
        
        virtual float calculateSalary();
        virtual std::string printSalary();

        std::string getName();
        std::string getType();
        int getWorkingDays();
        float getBaseSalary();

        void setName(std::string _name);
        void setType(std::string _type);
        void setWorkingDays(int _workingDays);
        void setBaseSalary(float _baseSalary);
};

#endif
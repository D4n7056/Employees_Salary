#include <iostream>
#include "Employee.h"

#ifndef COMMISIONWORKER_H
#define COMMISIONWORKER_H

class CommisionWorker : public Employee {
    private:
        float commision;
        int itemsSold;
    
    public:
        CommisionWorker(std::string _name, int _workingDays, float _baseSalary, float _commision, int _itemsSold);

        float calculateSalary() override;
        std::string printSalary() override;

        float getCommision();
        int getItemSold(); 

        void setCommision(float _commision);
        void setItemSold(int _itemSold);

};

#endif
#include <iostream>
#include "../include/CommisionWorker.h"

using namespace std;

CommisionWorker::CommisionWorker(std::string _name, int _workingDays, float _baseSalary, float _commision, int _itemsSold)
: Employee(_name, "Commision Worker", _workingDays, _baseSalary), commision(_commision > 0 ? _commision : 0), itemsSold(_itemsSold){};

float CommisionWorker::calculateSalary(){
    return ((workingDays*baseSalary) + (commision*baseSalary));
}

string CommisionWorker::printSalary(){
    return std::string("--- Details of the employee's salary ---\n") + 
    "Name: " + name + "\n" +
    "Type: " + type + "\n" + 
    "Base salary: " + to_string(baseSalary) + "\n" +
    "Commision: " + to_string(commision) + "\n" +
    "Itms sold: " + to_string(itemsSold) + "\n";
}

float CommisionWorker::getCommision(){
    return commision;
}

int CommisionWorker::getItemSold(){
    return itemsSold;
}

void CommisionWorker::setCommision(float _commision){
    commision = _commision;
}

void CommisionWorker::setItemSold(int _itemSold){
    itemsSold = _itemSold;
}
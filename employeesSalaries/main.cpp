
#include <vector>
#include "include/Employee.h"
#include "include/Boss.h"
#include "include/CommisionWorker.h"

using namespace std;

int main() {
    std::vector<Employee*> employees;

    Boss* boss1 = new Boss("Alonso", 30, 200, 1000);
    CommisionWorker* worker1 = new CommisionWorker("Alicia", 22, 150, 10, 30);
    CommisionWorker* worker2 = new CommisionWorker("Stephano", 20, 160, 8, 25);

    employees.push_back(boss1);
    employees.push_back(worker1);
    employees.push_back(worker2);

    float totalPayment = 0;

    for (Employee* employee : employees) {
        cout << employee->printSalary() << endl;
        totalPayment += employee->calculateSalary();
    }

    cout << "Total Payment for all employees: " << totalPayment << endl;
    
    return 0;
}
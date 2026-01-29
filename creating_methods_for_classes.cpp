#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int salary;

    void printDetails()
    {
        cout << "The name of the Employee is " << this->name << " and his salary is " << this->salary << " Dollars" << endl;
    }
};

int main()
{
    Employee S1, S2;
    S1.name = "Sourya";
    S1.salary = 50000;
    S1.printDetails();

    S2.name = "Josh";
    S2.salary = 40000;
    S2.printDetails();

    return 0;
}
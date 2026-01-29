#include <iostream>
using namespace std;

class Employee{
    public:
    string name;
    int salary;
};

int main(){
    Employee S1;
    S1.name = "Sourya";
    S1.salary = 50000;

    cout << "The name of the Employee is " << S1.name << " and his salary is " << S1.salary << " Dollars" << endl;

    return 0;
}
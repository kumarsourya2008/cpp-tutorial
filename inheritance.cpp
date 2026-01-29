#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int salary;

    Employee(string n, int s, int sp)
    {
        name = n;
        salary = s;
        secretPassword = sp;
    }

    // void printDetails()
    // {
    //     cout << "The name of the Employee is " << this->name << " and his salary is " << this->salary << " Dollars" << endl;
    // }

    void getsecretPassword()
    {
        cout << "The secret password of employee is : " << secretPassword << endl;
    }

private:
    int secretPassword;
};

void printDetails(Employee e)  // Writing details function outside the class
    {
        cout << "The name of the Employee is " << e.name << " and his salary is " << e.salary << " Dollars" << endl;
    }

class Programmer: public Employee{   // INHERITANCE
    int errors;
};

int main()
{
    Employee S1("Sourya constructor", 50000, 355542);
    printDetails(S1);        // Calling the details function i.e outside the class
    S1.getsecretPassword();  // Calling the password funcrion i.e inside the class

    return 0;
}
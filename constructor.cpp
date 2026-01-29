#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int salary;

    Employee(string n, int s, int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretPassword = sp;
    }

    void printDetails()
    {
        cout << "The name of the Employee is " << this->name << " and his salary is " << this->salary << " Dollars" << endl;
    }

    // "this->" is OPTIONAL when class variable and parameters are different 
    // "this->" is MANDATORY when class variable and parameters are same 

    void getsecretPassword()
    {
        cout << "The secret password of employee is : " << this->secretPassword << endl;
    }

private:
    int secretPassword;
};

int main()
{
    Employee S1("Sourya constructor", 50000, 355542);
    S1.printDetails();
    S1.getsecretPassword();

    Employee S2("John", 40000, 3754542);
    S2.printDetails();
    S2.getsecretPassword();

    return 0;
}
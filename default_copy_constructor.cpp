#include <iostream>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    int ID;
    string name;
    string sub;
    string dept;

    // Parameterised constructor
    Teacher(int ID, string name, string sub, string dept, double salary)  
    // If both OBJECT properties and PARAMETERS of the "Teacher" constructor is same then we have to use "this->" pointer
    {
        this->ID = ID;
        this->name = name;
        this->sub = sub;
        this->dept = dept;
        this->salary = salary;
    }

    void getinfo(){
        cout << "ID : " << ID << endl;
        cout << "Name : " << name << endl;
        cout << "Subject : " << sub << endl;
        cout << "Department : " << dept << endl;
        cout << "Salary : " << salary << endl;
    }
};

int main()
{
    Teacher T1(2511, "Sourya Kumar", "C++", "Computer Science and Engineering", 50000);
    // T1.getinfo();

    Teacher T2(T1); // Default copy constructor invoked/called
    T2.getinfo();

    return 0;
}
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
    {
        this->ID = ID;
        this->name = name;
        this->sub = sub;
        this->dept = dept;
        this->salary = salary;
    }

    // Custom copy constructor
    Teacher(Teacher &orgObj){  // Pass br reference
        cout << "I am custom copy constructor...." << endl;
        this->ID = orgObj.ID;
        this->name = orgObj.name;
        this->sub = orgObj.sub;
        this->dept = orgObj.dept;
        this->salary = orgObj.salary;
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

    Teacher T2(T1); // Custom copy constructor invoked/called
    T2.getinfo();

    return 0;
}
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

    // Non - parameterised constructor
    Teacher(){
        cout << "Hi, I am a constructor." << endl;
        dept = "Computer Science and Engineering";
    }

    // Parameterised constructor
    Teacher(int i, string n, string s, string d, double sal)
    {
        ID = i;
        name = n;
        sub = s;
        dept = d;
        salary = sal;
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
    T1.getinfo();

    cout  << "--------------- X ---------------" << endl;

    Teacher T2(2512, "Ram Kumar", "Math", "Computer Science and Engineering", 30000);
    T2.getinfo();

    return 0;
}
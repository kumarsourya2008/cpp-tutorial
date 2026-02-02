#include <iostream>
using namespace std;

class Student{
public:
    string name;
    int rollno;
};

class Teacher{
public:
    string subject;
    double salary;
};

class TA : public Student, public Teacher{
};

int main(){
    TA T1;
    T1.name = "Sourya Kumar";
    T1.rollno = 2511;
    T1.subject = "Quantum Computing";
    T1.salary = 50000;

    cout << "Name : " << T1.name << endl;
    cout << "Rollno : " << T1.rollno << endl;
    cout << "Subject : " << T1.subject << endl;
    cout << "Salary : " << T1.salary << endl;

    return 0;
}
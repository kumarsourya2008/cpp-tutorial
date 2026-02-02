#include <iostream>
using namespace std;

class Person{
public:
    string name;
    int age;
}
;
class Student : public Person{
public:
    int rollno;
};

class Teacher : public Person{
public:
    string subject;
    double salary;
};

int main(){
    Teacher T1;  // Here you can create and verify all the classes objects. I take Teacher class, you can take other like Student S1....
    T1.name = "Sourya Kumar";
    T1.age = 18;
    T1.subject = "Quantum Computing";
    T1.salary = 50000;

    cout << "Name : " << T1.name << endl;
    cout << "Age : " << T1.age << endl;
    cout << "Subject : " << T1.subject << endl;
    cout << "Salary : " << T1.salary << endl;

    return 0;
}
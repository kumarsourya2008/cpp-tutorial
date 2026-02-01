#include <iostream>
using namespace std;

class Person{
public:
    string name;
    int age;

    Person(string name, int age){  // Parent constructor will prints first, then the child constructor
        cout << "Parent constructor..." << endl;
        this->name = name;
        this->age = age;
    }
};

class Student : public Person{
    // name, age, rollno
public:
    int rollno;
    
    Student(string name, int age, int rollno) : Person(name, age){  // We can explicitly call parent class constructor from our own child class constructor.
        // If we call parent constructor in a child constructor we don't need to write type in parent constructor(Person) argument.
        cout << "Child constructor..." << endl;
        this->rollno = rollno;
    }

    void getInfo(){
        cout << "Name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "rollno : " << rollno << endl;
    }

};

int main(){
    Student S1("Sourya Kumar", 18, 47);

    S1.getInfo();

    return 0;
}
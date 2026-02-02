#include <iostream>
using namespace std;

class Person{
public:
    string name;
    int age;
};

class Student : public Person{
public:
    int rollno;
};

class GradStudent : public Student{
public:
    string researchArea;
};

int main(){
    GradStudent G1;
    G1.name = "Sourya Kumar";
    G1.age = 18;
    G1.rollno = 2511;
    G1.researchArea = "Quantum Computing";

    cout << "Name : " << G1.name << endl;
    cout << "Age : " << G1.age << endl;
    cout << "Rollno : " << G1.rollno << endl;
    cout << "Research Area : " << G1.researchArea << endl;

    return 0;
}
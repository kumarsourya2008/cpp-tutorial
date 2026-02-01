#include <iostream>
using namespace std;

class Student{
public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    Student(Student &obj){
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }

    void getInfo(){
        cout << "Name : " << name << endl;
        cout << "cgpa : " << *cgpaPtr << endl;
    }
};

int main(){
    Student S1("Sourya Kumar", 8.9);
    Student S2(S1); // Rahul Kumar

    S1.getInfo();
    *(S2.cgpaPtr) = 9.2;
    S1.getInfo();

    S2.name = "Rahul Kumar";
    S2.getInfo();

    return 0;
}
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

    // Destructor
    ~Student(){  
        cout << "Hi, I delete everything..." << endl;
        // The destructor will only free normal variables like "string name", "int sum", etc but not the new dynamic allocated memory/pointers
        // So we have to do this
        delete cgpaPtr;
    }

    void getInfo(){
        cout << "Name : " << name << endl;
        cout << "cgpa : " << *cgpaPtr << endl;
    }
};

int main(){
    Student S1("Sourya Kumar", 8.9);
    S1.getInfo();

    return 0;
}
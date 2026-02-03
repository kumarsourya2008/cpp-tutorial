#include <iostream>
using namespace std;

class Student{
public:
    string name;

    Student(){
        cout << "Non-parameterised constructor"<< endl;
    }

    Student(string name){
        cout << "Parameterised constructor" << endl;
        this->name = name;
    }
};

int main(){
    // Student S1;
    Student S1("Sourya Kumar");

    return 0;
}
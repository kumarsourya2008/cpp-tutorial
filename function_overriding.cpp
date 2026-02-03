#include <iostream>
#include <string>
using namespace std;

class Parent{
public:
    void getInfo(){
        cout << "Parent class" << endl;
    }
};

class Child : public Parent{
public:
    void getInfo(){
        cout << "Child class" << endl;
    }
};

int main(){
    Child C1;  // In this case the child's class function overrides the base/parent's class function
    C1.getInfo();

    Parent P1;
    P1.getInfo();

    return 0;
}
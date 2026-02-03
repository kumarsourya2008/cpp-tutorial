#include <iostream>
#include <string>
using namespace std;

class Parent{
public:
    void getInfo(){
        cout << "Parent class" << endl;
    }

    virtual void Hello(){
        cout << "Hello from parent" <<  endl;
    }
};

class Child : public Parent{
public:
    void getInfo(){
        cout << "Child class" << endl;
    }

    void Hello(){
        cout << "Hello from child" <<  endl;
    }
};

int main(){
    Child C1;
    C1.Hello();

    return 0;
}
#include <iostream>
using namespace std;

// Any class with a pure virtual function, that class will automatically becomes Abstract class.
class Shape{  // Abstract class
    virtual void draw() = 0; // pure virtual function - means values assigned to zero
};

class Circle : public Shape{
public:
    void draw(){
        cout << "Drawing circle" << endl;
    }
};

class Square : public Shape{
public:
    void draw(){
        cout << "Drawing square" << endl;
    }
};

int main(){
    Circle C1;
    C1.draw();

    Square S1;
    S1.draw();

    return 0;
}


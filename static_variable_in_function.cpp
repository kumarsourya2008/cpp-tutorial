#include <iostream>
using namespace std;

void func(){
    // If we call the function 1st time it will print zero and if we call it again(with increment/decrement) it will delete and again recreated/reassigned to 0 to the x variable 
    // int x = 0;  // So to fix the value of x after incrementing or decrementing in the memory we have to use "static" keyword
    static int x = 0;
    cout << "Value of x : " << x << endl;
    x++;
}

int main(){
    func();
    func();
    func();

    return 0;
}
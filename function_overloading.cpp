#include <iostream>
#include <string>
using namespace std;

class Print{
public:
    void show(int x){
        cout << "Int : " << x << endl;
    }

    void show(char ch){
        cout << "Char : " << ch << endl;
    }
};

int main(){
    Print P1;
    // P1.show(101);  // 1st function called
    P1.show('S');     // 2nd function called

    return 0;
}
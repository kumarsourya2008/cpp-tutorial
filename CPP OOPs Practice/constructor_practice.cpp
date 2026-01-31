#include <iostream>
using namespace std;

class Teacher{
public:

    Teacher(){
        cout << "Hi, I am a constructor." << endl;
        dept = "Computer Science and Engineering";
    }

    int ID;
    string name;
    string sub;
    string dept;
};

int main(){
    Teacher T1, T2;
    T1.ID = 2511;
    T1.name = "Sourya kumar";
    T1.sub = "CPP OOPs";
    
    T2.ID = 2512;
    T2.name = "Ram kumar";
    T2.sub = "Maths";

    cout << "The 1st teacher ID is : " << T1.ID << ", the name is " << T1.name << ", the sub is " << T1.sub << " and the department is " << T1.dept << endl;
    cout << "The 2nd teacher ID is : " << T2.ID << ", the name is " << T2.name << ", the sub is " << T2.sub << " and the department is " << T2.dept << endl;

    return 0;
}
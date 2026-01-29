#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rno;
    float cgpa;

    Student(){   // This is DEFAULT CONSTRCTOR. Without any argument and return type

    }

    // 1st Parameterised constructor
    Student(string n, int r){
        name = n;
        rno = r;
    }

    // 2nd Parameterised constructor
    Student(string n, int r, float c){
        name = n;
        rno = r;
        cgpa = c;
    }

    // 3rd Parameterised constructor
    Student(int r, float c, string n){
        name = n;
        rno = r;
        cgpa = c;
    }
};

int main(){
    Student S1("Sourya Kumar", 3445);       // This created using  the 1st Student constructor
    S1.cgpa = 8.7;

    Student S2;                             // This created using the Default coonstructor
    S2.name = "Josh";
    S2.rno = 6554;
    S2.cgpa = 6.7;

    Student S3("Ram Kumar", 6778, 7.4);     // This created using the 2nd Student constructor

    Student S4(8225, 8.2, "Shyam Mishra");  // This created using the 3rd Student constructor

    cout << S1.name << " " << S1.rno << " " << S1.cgpa << " " << endl;
    cout << S2.name << " " << S2.rno << " " << S2.cgpa << " " << endl;
    cout << S3.name << " " << S3.rno << " " << S3.cgpa << " " << endl;

    return 0;
}
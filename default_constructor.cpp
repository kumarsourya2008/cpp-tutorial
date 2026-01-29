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
    // Agar koi constructor hamne nhi banaya ho to by default ye bn jta h

    // Parameterised constructor
    Student(string n, int r){  // Ye constructor hamne banaya h
        name = n;
        rno = r;
    }
};

int main(){
    Student S1("Sourya Kumar", 3445);
    // S1.name = "Sourya Kumar";
    S1.rno = 7117;  // This will overwrite the parameterised roll no. to the newely assigned roll no. and also this will work without DEFAULT CONSTRCTOR
    S1.cgpa = 8.7;  // We can write cgpa like this also without giving and taking parameter and also this will work without DEFAULT CONSTRCTOR
    // Because this is showing overwriting not assigning

    //What if we want to write like this. So, there is a default constructor hidden
    // So we have to also write/mention that default constructor above the user-defined/Parameterised constructor to write like this
    Student S2;
    S2.name = "Josh";
    S2.rno = 6554;
    S2.cgpa = 6.7;

    cout << S1.name << " " << S1.rno << " " << S1.cgpa << " " << endl;
    cout << S2.name << " " << S2.rno << " " << S2.cgpa << " " << endl;

    return 0;
}
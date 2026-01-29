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

    // If we wnat to copy details of an object to another we can use this
    Student S5 = S1; // This is Deep copy
    // Deep copy - Means if we change the values of S5 it doesnot affect the original object S1
    // Shallow copy - Means if we change the values of S5 it affect the original object S1
    S5.name = "Ganesh";

    Student S6(S2); // Copy Constructor - Deep copy
    S6.name = "Vijay";

    cout << S1.name << " " << S1.rno << " " << S1.cgpa << " " << endl;
    cout << S2.name << " " << S2.rno << " " << S2.cgpa << " " << endl;
    cout << S3.name << " " << S3.rno << " " << S3.cgpa << " " << endl;
    cout << S5.name << " " << S5.rno << " " << S5.cgpa << " " << endl;
    cout << S6.name << " " << S6.rno << " " << S6.cgpa << " " << endl;

    return 0;
}
#include <iostream>
using namespace std;

class Teacher{
private:
    double slalary;

public:
    int ID;
    string name;
    string dept;
    string subject;

    void setsalary(double s){
        slalary = s;
    }

    double getsalary(){
        return slalary;
    }
};

int main(){
    Teacher T1;
    T1.ID = 3442;
    T1.name = "Sourya";
    T1.dept = "Computer Science";
    T1.subject = "C++";
    T1.setsalary(80000);

    cout << "The name of the employee is " << T1.name << " and the salary is : " << T1.getsalary() << endl;
}
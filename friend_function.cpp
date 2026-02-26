#include <iostream>
using namespace std;

// 1 + 4i
// 5 + 8i
// ------
// 6 + 12i

class Complex{
    int a;
    int b;

public:
    void setNumber(int n1, int n2){
        a = n1;
        b = n2;
    }

    void printNumber(){
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }

    // Below line means that non member sumComplex function is allowed to do anything with my private members(data)
    friend Complex sumComplex(Complex O1, Complex O2);
};

Complex sumComplex(Complex O1, Complex O2){   // We write 'Complex' as it returns something
    Complex O3;
    O3.setNumber((O1.a + O2.a), (O1.b + O2.b));
    return O3;
}

int main(){
    Complex C1, C2, sum;
    C1.setNumber(1, 4);
    C1.printNumber();
    // C1.sumComplex()  // We cannot use sumComplex() function because it is only declaration not the member function of the class

    C2.setNumber(5, 8);
    C2.printNumber();

    sum = sumComplex(C1, C2);
    sum.printNumber();

    return 0;
}

/* Properties of friend function -
1. Not in the scope of class.
2. Since it is not in the scope of the class, it cannot be called from the object of that class. C1.sumComplex() == Invalid
3. Can be invoked without the help of any object.
4. Usually contains the objects as arguments.
5. Can be declared inside public or private section of the class.
6. It cannot access the member directly by their names and need object_name.member_name to access any member.
*/
#include <iostream>
using namespace std;

class Account {
private:
    float balance;
    double password;  // Data hiding

public:
    int accountID;
    string username;
};

int main(){
    Account A1;
    A1.accountID = 2511;
    A1.username = "Sourya Kumar";

    cout << "The account ID is : " << A1.accountID << " and the username is "<< A1.username << endl;

    return 0;
}
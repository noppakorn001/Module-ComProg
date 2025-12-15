/* user input password if match with "1234" print "Login Success"" */

#include <iostream>
using namespace std;

int main(){
    string password;

    while (true){
        cout << "Enter password: ";
        cin >> password;
        if (password == "1234"){
            cout << "Login Success" << endl;
            break;
        }
        else{
            cout << "Try again" << endl;
        }
    }
    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main() {
    string password;
    if (!getline(cin, password)) return 0;

    bool hasNumber = false;
    bool hasLetter = false;

    bool isLengthValid = (password.length() >= 8);

    for (int i = 0; i < password.length(); i++) {
        if (password[i] >= '0' && password[i] <= '9') {
            hasNumber = true;
        }
        if ((password[i] >= 'A' && password[i] <= 'Z') || 
            (password[i] >= 'a' && password[i] <= 'z')) {
            hasLetter = true;
        }
    }

    if (isLengthValid && hasNumber && hasLetter) {
        cout << "strong password" << endl;
    } else {
        cout << "invalid password" << endl;
    }

    return 0;
}
/* Problem2: input student's name from keyboard and print "Hello, [name]" */

#include <iostream>
#include <string>
#include <cctype> 
using namespace std;

int main(){
    string name;
    cout << "Enter your name: ";
    
    getline(cin, name);

    bool isValid = true; // check if valid
    bool hasAlpha = false; // check if has alpha

    // check input
    if (name.empty()){
        isValid = false;
    }
    else {
        for (char c : name){
            // check if has alpha
            if (isalpha(c)) {
                hasAlpha = true;
            }

            // check invalid characters
            if (!isalpha(c) && !isspace(c)) {
                isValid = false;
                break; 
            }
        }
    }

    // check if valid and has alpha
    if (isValid && hasAlpha){ 
        cout <<"Hello, " << name << endl;
    }
    else {
        cout << "Invalid input" << endl;
    }
    return 0;
}
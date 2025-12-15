/* Problem3: input age and calculate age left to 60 years old */

#include <iostream>
#include <limits>
using namespace std;

int main(){
    int age;

    // idea: use cin for check input is valid 
    // use while loop because I want to check input is valid
    while (true){
        cout << "Enter your age: ";
        cin >> age;

        if (cin.fail()){
            cout << "Pls enter number only" << endl;
            cin.clear();
            // ignore iput and delete trash input 
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if (age < 0 || age > 60){
            cout << "Invlid Input" << endl;
        }
        else {
            break;
        }
    }
    cout << "You have left " << 60 - age << " years to 60 years old" << endl;

    return 0;
}
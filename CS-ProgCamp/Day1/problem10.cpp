/* input temperature if higher than 37.5 print "have fever"*/

#include <iostream>
using namespace std;

int main(){
    float temperature;
    cout << "Enter temperature: " ;
    cin >> temperature;
    if (temperature > 37.5){
        cout << "Have a fever" << endl;
    }
    else {
        cout << "Normal" << endl;
    }
    return 0;
}
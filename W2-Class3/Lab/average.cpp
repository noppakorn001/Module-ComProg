/* 6810210158 Noppakorn Wunnoy*/
#include <iostream>
using namespace std;
int main(){
    int num;
    float avg = 0.0;
    for(int i = 0; i < 5; i++){
        cout << "Enter number " << i+1 << ": ";
        cin >> num;
        avg += num;
    }
    avg /= 5;
    cout << "Average is: " << avg << endl;
    return 0;
}

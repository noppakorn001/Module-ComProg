#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float P,r,n;
    cin >> P ;
    cin >> r;
    cin >> n;
    double A = P * pow((1+(r/100)),n);
    //A = P * pow((1+(r/100),n));
    cout << A << endl;
    return 0;

}
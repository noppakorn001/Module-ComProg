#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float w,h,bmi;
    cin >>  w ;
    cin >>  h ;
    bmi = w / (h*h) ;
    //cout << bmi << endl;
    if (bmi>=25.0) {
        cout << "Obese" << endl;
    }
    else if (23.0<=bmi && bmi<25.0) {
        cout << "Overweight" << endl;
    }
    else if (18.5<=bmi && bmi<23.0) {
        cout << "Normal" << endl;
    }
    else if (18.5>bmi) {
        cout << "Underweight" << endl;
    }
    return 0;

}
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main() {
    float score[5];
    string name[5];
    float sum,avg;
    for (int i=0;i<5;i++) {
        cin >> name[i];
        cin >> score[i];
    }

    for (int i=0;i<5;i++) {
        sum += score[i];
    }

    avg = sum/5;

    cout << "Average: " << avg << endl;

    for (int i=0;i<5;i++) {
        if (score[i]>avg) {
            cout << name[i] << endl;
        }
    }

}
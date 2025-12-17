/* create 2D array for collect score 3 people and 4 subject */
#include <iostream>
using namespace std;

int main() {
    int score[3][4] = {
        {56, 42, 65, 42},
        {16, 23, 96, 85},
        {80, 65, 89, 12}
    };

    // print index 0 of each person 
    cout << "Score of person 1: " << score[0][0] << endl;
    cout << "Score of person 2: " << score[1][0] << endl;
    cout << "Score of person 3: " << score[2][0] << endl;

    return 0;
}

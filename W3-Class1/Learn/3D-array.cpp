/* create 3D array for collect score 3 people and 4 subject and 2 exam and print it */

#include <iostream>
using namespace std;

int main() {
    int score[3][4][2] = {
        {
            {56, 42},
            {16, 23},
            {80, 65},
            {89, 12}
        },
        {
            {56, 42},
            {16, 23},
            {80, 65},
            {89, 12}
        },
        {
            {56, 42},
            {16, 23},
            {80, 65},
            {89, 12}
        }
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 2; k++) {
                cout << score[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
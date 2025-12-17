/* reference array */
#include <iostream>
using namespace std;

int main(){
    int num [3] = {15, 20, 25}; // it mean can access array in index 0 to 2
    char letter [3] = {'H', 'i', '!'} ; // it mean can access array in index 0 to 2
    int score [2] [2] = { {1,2} , {3,4} } ; // it mean can access array in index 0 to 2

    // access array in index 0
    cout << num[0] << endl;
    cout << letter[0] << endl;
    cout << score[0][0] << endl;

    cout << "\n";

    // access array in index 1
    cout << num[1] << endl;
    cout << letter[1] << endl;
    cout << score[0][1] << endl;

    cout << "\n";

    // access array in index 2
    cout << num[2] << endl;
    cout << letter[2] << endl;
    cout << score[1][1] << endl;

    return 0;
}
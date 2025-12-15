/* input score and calculate grade  A: >=80, B: 70-79, C: 60-69, D: 50, F: <50 */

#include <iostream>
using namespace std;

int main(){
    float score;
    cout << "Enter score: " << endl;
    cin >> score;

    if (score>=80){
        cout << "A" << endl;
    }
    else if (score>=70 && score<80){
        cout << "B" << endl;
    }
    else if (score>=60 && score<70){
        cout << "C" << endl;
    }
    else if (score>=50 && score<60){
        cout << "D" << endl;
    }
    else {
        cout << "F" << endl;
    }
    return 0;
}
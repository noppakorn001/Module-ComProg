/* Problem4: input score in 3 subjects and calculate average score*/

#include <iostream>
using namespace std;

int main(){
    float score1,score2,score3;
    cout << "Enter score in 3 subjects: " << endl;
    cin >> score1 >> score2 >> score3 ;
    cout << "Average score: " << (score1 + score2 + score3) / 3 << endl;
    return 0;
}
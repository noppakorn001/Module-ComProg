/* input score(real number) 3 round No more than 10 people and find mean score each people */
/* have yes or no to continue in next student */
/* if finish 10 people break */
/*
example use
Student 1: 
Exam 1 : 10
Exam 2 : 20
Exam 3 : 30
Average score : 20
Enter data of next Student (y/n) : y
Student 2: 
Exam 1 : 10
Exam 2 : 20
Exam 3 : 30
Enter data of next Student (y/n) : n
*/

#include <iostream>
using namespace std;

int main(){
    float score[10][3];
    int i =0;
    while(true){
        cout << "Student " << i+1 << endl;
        for (int j = 0; j<3;j++){
            cout << "Exam " << j+1 << " : ";
            cin >> score[i][j];
        }
        cout << "Average score : " << (score[i][0]+score[i][1]+score[i][2])/3 << endl;
        i++;    cout << "Enter data of next Student (y/n) : ";
        char ch;
        cin >> ch;
        if (ch == 'n'){
            break;
        }
    }
    return 0;
}
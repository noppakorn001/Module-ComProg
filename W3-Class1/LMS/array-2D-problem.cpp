/* 6810210158 Noppakorn Wunnoy*/

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
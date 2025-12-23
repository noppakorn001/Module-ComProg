#include <iostream>
using namespace std;
int main (){
    int i = 0;
    while(i<10){
        i++ ;
        cout << " hi\n";
        while(i<8){
            i++ ;
            cout << " hello\n";
            cout << i << endl;
        }
    }
    return 0;
}
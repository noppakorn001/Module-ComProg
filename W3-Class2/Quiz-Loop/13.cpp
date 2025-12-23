#include <iostream>
using namespace std;
int main (){
    int i= 6720;
    int j=4;
    while ( (i%j) == 0){
        i=i/j;
        j=j+1;
    }
    cout << j ;
    return 0;
}
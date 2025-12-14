/* Noppakorn Wunnoy 6810210158 */
#include <iostream>
using namespace std;
int main(){
    int width, height;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height: ";
    cin >> height;

    if(width <= 0 || height <= 0){
        cout << "Invalid input";
        return 0;
    }

    if(width > height){
        cout << "Invalid input";
        return 0;
    }

    for(int i=0; i<height; i++){
        for(int j=0; j<width; j++){
            cout << "*";
        }
        cout << endl;
    }
}
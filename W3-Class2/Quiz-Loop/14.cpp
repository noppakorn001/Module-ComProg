#include <iostream>
using namespace std;

int main() {
    int height = 2;
    int width = 4;
    int row = 0;

    while (row < height) {
        
        int column = 0;

        while (column < width) {
            cout << "*"; 
            
            column = column + 1;
        }
        cout << endl; 

        row = row + 1;
    }
    cout << "End" << endl;

    return 0;
}
/* input 10 number in array and find sum of even number */
/* find min and max number from array */

#include <iostream>
using namespace std;

int main(){
    int num[10];
    int sum = 0;
    int max,min; 

    for (int i = 0; i < 10; i++){
        cout << "Enter number " << i+1 << ": ";
        cin >> num[i];

        if (num[i] % 2 == 0){
            sum += num[i];
        }

        if (i == 0) {
            min = num[i];
            max = num[i];
        } else {
            if (num[i] < min){
                min = num[i];
            }
            if (num[i] > max){
                max = num[i];
            }
        }
    }
    cout << "Sum of even number: " << sum << endl;
    cout << "Max number: " << max << endl;
    cout << "Min number: " << min << endl;
    return 0;
}
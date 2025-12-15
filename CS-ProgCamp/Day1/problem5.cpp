/* input day and convert to weeek and day */

#include <iostream>
using namespace std;

int main(){
    int day;
    cout << "Enter day: ";
    cin >> day;
    cout << "Week: " << day / 7 << endl;
    cout << "Day: " << day %7 <<  endl;
    return 0;
}
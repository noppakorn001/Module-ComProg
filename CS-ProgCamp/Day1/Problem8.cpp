/*
Receive the Buddhist Era (B.E.) year and indicate whether it is a leap year.
note : Leap year is every 4 years, except for years that are divisible by 100 but not by 400.
*/

/*
Rule 1: The year must be evenly divisible by 4.
Rule 2 (Exception): If the year is also divisible by 100, it is not a leap year.
Rule 3 (Override Exception): If the year is divisible by 400, it is a leap year (overriding Rule 2).
Leap year based on the Gregorian calendar.
*/

#include <iostream>
using namespace std;

int main(){
    int yearBE,  yearAD;
    cout << "Enter year BE: ";
    cin >> yearBE;
    yearAD = yearBE -543;

    // condition1: Divisible by 4 but not divisible by 100.
    if (yearAD %4 == 0 && yearAD %100 != 0){
        cout << "Leap Year" << endl;
    }
    // condition2: Dvisible by 400
    else if(yearAD %400 == 0){
        cout << "Leap Year" << endl;
    }
    // condition3: Not  leap year
    else{
        cout << "Not Leap Year" << endl;
    }
    return 0;
}


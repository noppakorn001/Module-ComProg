/* Noppakorn Wunnoy 6810210158 */

#include <iostream>
using namespace std;
int main() {
    double hours;
    const double rate_per_hour = 100;
    const double ot_multiplier = 2;
    const double normal_hours = 6;

    cout << "Enter Working Hours: ";
    cin >> hours;

    if (hours < 0 || hours > 24) {
        cout << "Invalid hours" << endl;
        return 1;
    }

    double totalWage;
    switch (hours > normal_hours) {
        case 1:
            totalWage = (normal_hours * rate_per_hour) + 
            ((hours - normal_hours) * rate_per_hour * ot_multiplier);
            break;
        case 0:
            totalWage = hours * rate_per_hour;
            break;
    }

    cout << "Total wage: " << totalWage << " Baht" << endl; 
    return 0;
}
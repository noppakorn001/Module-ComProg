#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    double a,b;
    int n;
    cin >> n;
    vector<double> order(n);
    for (int i=0;i<n;i++) {
        cin >> a >> b;
        order[i] = a/b;
    }

    // max to min
    sort(order.begin(),order.end(),greater<double>());

    vector<double> remaining;

    for(int i=0;i<n;i++) {
        bool placed = false;

        for(int j=0;j<remaining.size();j++) {
            if(remaining[j]>=order[i]) {
                remaining[j] -= order[i];
                placed = true;
                break;
            }
        }

        if(!placed) {
            remaining.push_back(1.0-order[i]);
        }
    }
    cout << remaining.size();
    return 0;
}
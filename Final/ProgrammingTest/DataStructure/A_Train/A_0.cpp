#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int train;
    vector<int> even;
    vector<int> odd;

    for (int i=0;i<n;i++) {
        cin >> train;
        if (train%2==0) {
            even.push_back(train);
        } else {
            odd.push_back(train);
        }
    }

    for (int i=0;i<even.size();i++) {
        cout << even[i] << " ";
    }

    for (int i=0;i<odd.size();i++) {
        cout << odd[i] << " ";
    }

}
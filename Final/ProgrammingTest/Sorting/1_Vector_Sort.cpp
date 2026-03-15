#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> num= {1,8,6,4,5};

    sort(num.begin(),num.end());

    for (int i=0;i<num.size();i++) {
        cout << num[i] << "";
    }

}
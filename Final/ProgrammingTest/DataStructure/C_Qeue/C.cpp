#include <iostream>
#include <queue>
using namespace std;

int main() {
    int capacity,n;
    cin >> capacity >> n;

    queue<int> groups;
    for (int i=0;i<n;i++) {
        int groupSize;
        cin >> groupSize;
        groups.push(groupSize);
    }

    int vans = 0;

    while(!groups.empty()) {
        int currentLoad = 0;
        vans++;

        while(!groups.empty() && currentLoad + groups.front() <= capacity) {
            currentLoad += groups.front();
            groups.pop();
        }
    }

    cout << vans;
    return 0;
}
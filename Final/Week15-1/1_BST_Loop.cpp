/*
6810210158
์Noppakorn Wunnoy
*/

#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;
  int num[n];
  for (int i = 0; i < n; i++) {
    cin >> num[i];
  }

  int target;
  cin >> target;

  int left = 0;
  int right = n - 1;
  int address = -1;

  while (left <= right) {
    int mid = left + (right - left) / 2;
    if (num[mid] == target) {
      address = mid;  
      break;
    } else if (num[mid] < target) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  cout << address << endl;
  return 0;
}
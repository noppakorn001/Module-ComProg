/*
6810210158
์Noppakorn Wunnoy
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  string mountain;
  cin >> mountain;

  int left = 0;
  int right = mountain.length() - 1;

  while (left < right) {
    int mid = left + (right - left) / 2;
    if (mountain[mid] > mountain[mid + 1]) {
      right = mid;
    } else {
      left = mid + 1;
    }
  }
  cout << left + 1 << endl;

  return 0;
}
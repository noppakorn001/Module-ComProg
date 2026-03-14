/*
6810210158
์Noppakorn Wunnoy
*/

#include <iostream>
using namespace std;

int main() {
  string characters;
  cin >> characters;

  // ENG have 26 characters
  int frequency[26] = {0}; // set arr = 0

  for (int i = 0; i < characters.length(); i++) {
    // Ref ASCII
    frequency[characters[i] - 'a']++;
    //cout << frequency[characters[i] - 'a'];
  }

  for (int i = 0; i < 26; i++) {
    if (frequency[i] > 0) {
      cout << char('a' + i) << ":" << frequency[i] << ", ";
    }
  }
  return 0;
}

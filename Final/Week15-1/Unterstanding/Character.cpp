#include <iostream>
#include <string>
using namespace std;

int main () {

    string text;
    cin >> text;

    int f[26]={0};

    for (int i = 0; i < text.length(); i++) {
    // Ref ASCII
    f[text[i] - 'a']++;
    cout << f[text[i] - 'a'];
  }



}
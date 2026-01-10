/*
input string and count vowels and consonants
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int vowels = 0;
    int consonants = 0;
    for (int i=0;i<s.length();i++) {
        if (s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u') {
            vowels++;
        }
        else if (s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U') {
            vowels++;
        }
        // int and symbols are not vowels or consonants
        else if (s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z') {
            consonants++;
        }
    }
    cout<<"vowels = "<<vowels<<endl;
    cout<<"consonants = "<<consonants<<endl;
}
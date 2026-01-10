#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str;
    cout << str.length() << endl;
    for(char ch:str){
        if(isdigit(ch)){
            cout << "is digits" << endl;
        }
        else if(isalpha(ch)){
            cout << "is alphabet" << endl;
        if(isupper(ch)){
            cout << "is uppercase" << endl;
        }
        else if(islower(ch)){
            cout << "is lowercase" << endl;
        }
        else{
            cout << "unknown" << endl;
        }
        return 0;
    }
}

    
}
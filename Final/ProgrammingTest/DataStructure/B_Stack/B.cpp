#include <iostream>
#include <stack>
using namespace std;

int main() {
    int M;
    cin >> M;
    stack<char> st;
    char cmd;

    for (int i=0; i<M ;i++) {
        cin >> cmd;

        // case A-Z
        if (cmd >= 'A' && cmd <= 'Z') {
            st.push(cmd);
        }
        // case *
        else if (cmd == '*') {
            if(!st.empty()) {
                st.pop();
            }
        }
        // case #
        else if (cmd == '#') {
            if(!st.empty()) {
                st.push(st.top());
            }
        }
    }

    if (st.empty()) {
        cout << "Empty";
    }
    else {
        while (!st.empty()) {
            cout << st.top();
            st.pop();
            if (!st.empty()) {
                cout << " ";
            }
        }
    }
    return 0;
}
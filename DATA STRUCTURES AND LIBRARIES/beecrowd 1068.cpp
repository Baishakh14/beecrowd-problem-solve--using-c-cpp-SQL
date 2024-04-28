#include<bits/stdc++.h>
using namespace std;

int main() {
    char a[10000];
    while(cin>>a)
    {
    stack<char> ab;
    int n = strlen(a);
    int balance = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] == '(') {
            ab.push(a[i]);
        } else if (a[i] == ')') {
            if (!ab.empty()) {
                ab.pop();
            } else {
                balance = 0;
            }
        }
    }

    if (balance == 1 && ab.empty()) {
        cout << "correct" << endl;
    } else {
        cout << "incorrect" << endl;
    }
    }

    return 0;
}


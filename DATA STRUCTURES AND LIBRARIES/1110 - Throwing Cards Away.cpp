#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while(cin >> n, n) {
        if(n == 1) {
            cout << "Discarded cards:" << endl;
            cout << "Remaining card: 1" << endl;
        } else {
            queue<int> ab;
            for(int i = 1; i <= n; i++) {
                ab.push(i);
            }
            vector<int> top;
            vector<int>::iterator it;
            while(ab.size() > 1) {
                if(n == 2) {
                    top.push_back(ab.front());
                    ab.pop(); 
                    break;
                }
                top.push_back(ab.front());
                ab.pop();
                ab.push(ab.front());
                ab.pop();
            }
            
            // Print Discarded cards using iterator
            cout << "Discarded cards: ";
            //vector<int>::iterator it;
            for(it = top.begin(); it != top.end() - 1; ++it) {
                cout << *it << ", ";
            }
            cout << *(top.end() - 1) << endl;
            
            cout << "Remaining card: " << ab.front() << endl;
        }
    }
    return 0;
}

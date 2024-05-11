#include<bits/stdc++.h>
using namespace std;
const int mx = 101;
int visit[mx];
int cont;
void dfs(int root,vector<int> g[]) {
    visit[root] = 1;
    for (int it : g[root]) {
        if (!visit[it]) {
           dfs(it,g);
        cont += 2; // Increment cc by 2 for each unvisited neighbor
        }
    }
}

int main() {

    int n;
    cin >> n;
    while (n--) {
        cont = 0;
        memset(visit, 0, sizeof(visit));
        vector<int>g[mx];
        int root, v, a;
        cin >> root >> v >> a;
        for (int i = 0; i < a; i++) {
            int b, c;
            cin >> b >> c;
            g[b].push_back(c);
            g[c].push_back(b);
        }
        dfs(root,g);
        cout << cont << endl;
    }
    return 0;
}

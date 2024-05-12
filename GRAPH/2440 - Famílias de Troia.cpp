#include<bits/stdc++.h>
using namespace std;
const int mx = 1e5;
vector<int>g[mx];
bool visit[mx];
void dfs(int root)
{
  visit[root] = true;
  for(int it :g[root])
  {
     if(visit[it] == false)
     {
      dfs(it);
     }
  }
}
int main()
{
  memset(visit,false,sizeof(visit));
  int v,e; ///vertex ,edge;
  cin>>v>>e;
  for(int i = 0;i<e;i++)
  {
   int a,b;
   cin>>a>>b;
   g[a].push_back(b);
   g[b].push_back(a);
  }
 int c = 0;
 for(int i = 1;i<=v;i++)
 {
  if(visit[i] == false)
  {
    dfs(i);
    c++;
  }
 }
 cout<<c<<endl;
   return 0;
}

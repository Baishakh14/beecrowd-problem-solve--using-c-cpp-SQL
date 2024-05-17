#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  while(n--)
  {
    int c = 0;
    int a;
    cin>>a;
    string ab;
    cin>>ab;
    int ba = ab.length();
    string x = ab;
    sort(ab.begin(),ab.end());
    for(int i = 0;i<ba;i++)
    {
         if(ab[i] != x[i]) c++;
         if(c>2) break;
    }
    if(c == 2) cout<<"There are the chance."<<endl;
    else cout<<"There aren't the chance."<<endl;
  }


    return 0;
}

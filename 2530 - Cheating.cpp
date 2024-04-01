#include<iostream>
using namespace std;
int main()
{
 int a,b;
 while(cin>>a>>b)
 {
 int ju[a],r[b];
 for(int i = 0;i<a;i++)
 cin>>ju[i];
 for(int i = 0;i<b;i++) cin>>r[i];
int x = 0;
for(int i = 0;i<b;i++)
{
  for(int j = 0;j<a;j++)
  {
    if(ju[j]==r[i])
    {
        x++;
        i++;
    }
  }
}
if(x==b)
cout<<"sim"<<endl;
else cout<<"nao"<<endl;
 }
  return 0;
}

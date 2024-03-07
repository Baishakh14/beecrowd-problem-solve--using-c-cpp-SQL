#include<iostream>
using namespace std;
int main()
{
  int n;
  while(cin>>n,n)
  {
   int t = 0;
   for(int i = 1;i<=n;i++)
   {
    t+=i*i;
   }
   cout<<t<<endl;
  }
  return 0;
}

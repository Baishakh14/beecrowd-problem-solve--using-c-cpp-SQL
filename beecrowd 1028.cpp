#include<iostream>
using namespace std;
int gcd(int a,int b)
{
  if(b==0) return a;
  else
  return gcd(b,a%b);
}
int gcd_logic(int a,int b)
{
  if(b==0) return a;
  while(b!=0)
  {
    int t = b;
    b = a%b;
    a = t;
  }
  return a;
}
int main()
{
  int n;
  cin>>n;
  while(n--)
  {
    int a,b;
    cin>>a>>b;
    cout<<gcd_logic(a,b)<<endl;
  }

  return 0;
}

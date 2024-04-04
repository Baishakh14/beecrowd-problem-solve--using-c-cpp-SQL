#include<iostream>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  int a,b;
  cin>>a>>b;
  int ride  = 1;
  int s = 0;
  for(int i = 0;i<a;i++)
  {
   int bc;
   cin>>bc;
   s+=bc;
   if(s>b)
   {
    ride++;
    s = bc;
   }
  }
  cout<<ride<<endl;
 }
  return 0;
}

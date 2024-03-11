#include<iostream>
using namespace std;
typedef unsigned long long ull;
int main()
{
  ull a,b;
  cin>>a>>b;
  ull s = ((a+b)*(b-a+1)/2);
  cout<<s<<endl;
  return 0;
}

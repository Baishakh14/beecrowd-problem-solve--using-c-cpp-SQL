#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n;
  cin>>n;
  while(n--)
  {
    unsigned long long a;
    cin>>a;
    cout<<(unsigned long long)((pow(2,a)/12)/1000)<<" kg"<<endl;
  }
return 0;
}

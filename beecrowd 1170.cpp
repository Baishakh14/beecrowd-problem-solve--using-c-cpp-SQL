#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  while(n--)
  {

    double a;
    cin>>a;
    int c = 0;
    while(a>1)
    {
      c+=1;
      a/=2;
    }
    cout<<c<<" dias"<<endl;
  }

  return 0;
}

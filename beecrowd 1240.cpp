#include<iostream>
#include<cmath>
int nod(long long int a) ///number of digit;
{
  int c = 0;
  while(a)
  {
    c++;
    a/=10;
  }
  return c;
}
using namespace std;
int main()
{
  int n;
  cin>>n;
  while(n--)
  {
    long long int a,b;
    cin>>a>>b;
    int d = nod(b);
    d = pow(10,d);
    if(a%d==b) cout<<"encaixa"<<endl;
    else cout<<"nao encaixa"<<endl;
  }
  return 0;
}

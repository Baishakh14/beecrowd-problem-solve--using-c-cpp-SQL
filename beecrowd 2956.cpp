#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  double a,b;
  cin>>a>>b;
  cout<<fixed<<setprecision(5)<<"Concluimos que, dado o limite da entrada, a resposta seria:  y = f(x) = "<<(a*b)/2<<endl;

  return 0;
}

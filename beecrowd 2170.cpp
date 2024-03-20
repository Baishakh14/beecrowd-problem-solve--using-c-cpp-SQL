#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  double a,b,l;
  int c = 1;
  while(cin>>a>>b)
  {
   l = b-a;
   l*=100;
   l/=a;
   cout<<"Projeto "<<c;
   c++;
   cout<<":"<<endl;
   cout<<fixed<<setprecision(2)<<"Percentual dos juros da aplicacao: "<<l<<" %"<<endl;
   cout<<endl;
  }
  return 0;
}

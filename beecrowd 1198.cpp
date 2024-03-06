#include<iostream>
void swap(long long int *a,long long *b)
{
   long long int t;
   t = *a;
   *a  = *b;
   *b = t;
}
using namespace std;
int main()
{
  long long int a,b;
  while(cin>>a>>b)
  {
    if(b>a) swap(&a,&b);
    cout<<a-b<<endl;
  }

  return 0;
}

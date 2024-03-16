#include<iostream>
using namespace std;
int main()
{
  int n;
  int i = 0;
  while(cin>>n && n!=-1)
  {
    cout<<"Experiment "<<++i<<": "<<n/2<<" full cycle(s)"<<endl;
  }
    return 0;
}

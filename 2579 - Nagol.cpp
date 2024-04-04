#include<iostream>
using namespace std;
int main()
{
  int a[4];
  for(int i = 0;i<4;i++)
  {
    cin>>a[i];
  }
  if(a[1] % 2 == 0 || a[2] % 2 == 0)
  {
    if(a[3] % 2 == 0) cout<<"Direita"<<endl;
    else cout<<"Esquerda"<<endl;
  }
  else 
  {
    if(a[3] % 2 == 0) cout<<"Esquerda"<<endl;
    else cout<<"Direita"<<endl;
  }
    return 0;
}

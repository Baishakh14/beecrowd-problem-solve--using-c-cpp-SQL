#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int n;
  int t = 1;
  while(cin>>n,n)
  {
      cout<<"Teste "<<t++<<endl<<static_cast<int>(pow(2,n)-1)<<endl<<endl;
  }
  ///static_cast<int>(pow(2,n)-1) for typecast like in c (int)

    return 0;
}

#include<iostream>
using namespace std;
int main()
{
 int a;
 cin>>a;
 int arr[a];
 for(int i = 0;i<a;i++) cin>>arr[i];
 int mn = 0;
 int m = 0;
 for(int i = 0;i<a;i++)
 {
  int c = 0;
  for(int j = i+1;j<a;j++)
  {
    if(arr[i]==arr[j]) c++;
  }
  if(c>m)
  {
    m = c;
    mn = arr[i];
  }
  if(c==m) 
    if(arr[i]>mn) mn = arr[i];
 }
cout<<mn<<endl;
  return 0;
}

#include<stdio.h>
#include<math.h>
void o(int l)
{
if(l==1)printf("I");
if(l==2)printf("II");
if(l==3)printf("III");
if(l==4)printf("IV");
if(l==5)printf("V");
if(l==6)printf("VI");
if(l==7)printf("VII");
if(l==8)printf("VIII");
if(l==9)printf("IX");
}
void t(int l)
{
    int a = l/10;
    l = l%10;
if(a==1)printf("X");
if(a==2)printf("XX");
if(a==3)printf("XXX");
if(a==4)printf("XL");
if(a==5)printf("L");
if(a==6)printf("LX");
if(a==7)printf("LXX");
if(a==8)printf("LXXX");
if(a==9)printf("XC");
o(l);
}
void three(int l)
{
    int a = l/100;
 if(a==1)printf("C");
if(a==2)printf("CC");
if(a==3)printf("CCC");
if(a==4)printf("CD");
if(a==5)printf("D");
if(a==6)printf("DC");
if(a==7)printf("DCC");
if(a==8)printf("DCCC");
if(a==9)printf("CM");
l = l%100;
t(l);
}
int main()
{
  int n;
  scanf("%d",&n);
  int l = log10(n)+1;
  if(l==1) o(n);
  if(l==2) t(n);
  if(l==3) three(n);
  printf("\n");
    return 0;
}


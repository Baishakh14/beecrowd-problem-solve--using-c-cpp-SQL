//Bismillahi Rahmanir Rahim
#include<stdio.h>
#include<string.h>
int main()
{
  char a[100];
  gets(a);
  int n = strlen(a);
  if(n==3)
  {
      if(a[0]=='1')printf("C");
    else if(a[0]=='2')printf("CC");
    else if(a[0]=='3')printf("CCC");
    else if(a[0]=='4')printf("CD");
      else if(a[0]=='5')printf("D");
        else if(a[0]=='6')printf("DC");
          else if(a[0]=='7')printf("DCC");
            else if(a[0]=='8')printf("DCCC");
              else if(a[0]=='9')printf("CM");
                    if(a[1]=='1')printf("X");
    else if(a[1]=='2')printf("XX");
    else if(a[1]=='3')printf("XXX");
    else if(a[1]=='4')printf("XL");
      else if(a[1]=='5')printf("L");
        else if(a[1]=='6')printf("LX");
          else if(a[1]=='7')printf("LXX");
            else if(a[1]=='8')printf("LXXX");
              else if(a[1]=='9')printf("XC");
                    if(a[2]=='1')printf("I");
    else if(a[2]=='2')printf("II");
    else if(a[2]=='3')printf("III");
    else if(a[2]=='4')printf("IV");
      else if(a[2]=='5')printf("V");
        else if(a[2]=='6')printf("VI");
          else if(a[2]=='7')printf("VII");
            else if(a[2]=='8')printf("VIII");
              else if(a[2]=='9')printf("IX");
  }
  else if(n==2)
  {
                          if(a[0]=='1')printf("X");
    else if(a[0]=='2')printf("XX");
    else if(a[0]=='3')printf("XXX");
    else if(a[0]=='4')printf("XL");
      else if(a[0]=='5')printf("L");
        else if(a[0]=='6')printf("LX");
          else if(a[0]=='7')printf("LXX");
            else if(a[0]=='8')printf("LXXX");
              else if(a[0]=='9')printf("XC");
                                  if(a[1]=='1')printf("I");
    else if(a[1]=='2')printf("II");
    else if(a[1]=='3')printf("III");
    else if(a[1]=='4')printf("IV");
      else if(a[1]=='5')printf("V");
        else if(a[1]=='6')printf("VI");
          else if(a[1]=='7')printf("VII");
            else if(a[1]=='8')printf("VIII");
              else if(a[1]=='9')printf("IX");
  }
  else if(n==1)
  {
                                        if(a[0]=='1')printf("I");
    else if(a[0]=='2')printf("II");
    else if(a[0]=='3')printf("III");
    else if(a[0]=='4')printf("IV");
      else if(a[0]=='5')printf("V");
        else if(a[0]=='6')printf("VI");
          else if(a[0]=='7')printf("VII");
            else if(a[0]=='8')printf("VIII");
              else if(a[0]=='9')printf("IX");
  }
printf("\n");


    return 0;
}


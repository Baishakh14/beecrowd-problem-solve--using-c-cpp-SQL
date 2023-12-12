//Bismillahi Rahmanir Rahim
#include<stdio.h>
#include<string.h>
int main()
{
   char a[1000];
   char i[] = " ";
    while(1)
    {
scanf(" %[^\n]",a);
if(strcmp(a,"*")==0)
    break;
int c = 0;
       if(a[0]>=97 && a[0]<=122)
           {
              char *p = strtok(a,i);
               int x = a[0];
              while(p!='\0')
              {
                  if((p[0]==x)||(p[0]==(x-32)))
                  {
                      p = strtok(NULL,i);
                  }
                  else
                  {
                      c=c+1;
                      p = strtok(NULL,i);
                  }
              }
    if(c==0)
    {
        printf("Y\n");
    }
    else
        printf("N\n");
    }
           if(a[0]>=65 && a[0]<=90)
           {
              char *p = strtok(a,i);
               int x = a[0];
              while(p!='\0')
              {
                  if(p[0]==x||(p[0]==(x+32)))
                  {
                      p = strtok(NULL,i);
                  }
                  else
                  {
                      c=c+1;
                      p = strtok(NULL,i);
                  }
              }
    if(c==0)
    {
        printf("Y\n");
    }
    else
        printf("N\n");
    }
        }
    return 0;
}


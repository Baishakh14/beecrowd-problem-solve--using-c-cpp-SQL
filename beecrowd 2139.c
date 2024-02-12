#include<stdio.h>
int main()
{
   int n[] = {31,29,31,30,31,30,31,31,30,31,30,25};
    int a,b; ///month and the date from user;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
       if(a==12&&b==25) printf("E natal!\n"); ///today is chrismas
       else if(a==12 && b==24) printf("E vespera de natal!\n"); ///chrismass evening
       else if(a==12 && b>25) printf("Ja passou!\n"); ///chrismass left
       else
       {
           int x = n[a-1]-b; ///remining day of the given month
           for(int i = a;i<12;i++)
           {
               x+=n[i]; ///finding the remaining day of christmass come;
           }
           printf("Faltam %d dias para o natal!\n",x);
       }
    }

    return 0;
}

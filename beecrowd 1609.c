#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   while(n--)
   {
       int s = 0;///total sum is 0
       int a;
       scanf("%d",&a); ///how many sheep he count
       int b[a];///make a array of number of those counted sheep
       for(int i = 0;i<a;i++)
       {
           scanf("%d",&b[i]);///take all the unique number of sheep he count
       }
       for(int i = 0;i<a;i++)
       {
           int t = 1;
           for(int j = i+1;j<a;j++)
           {
               if(b[i]==b[j])
               {
                   t=0;
                   break;///if count twice then break and do for the next and t = 0;
               }
           }
           s+=t; ///make the sum of if its unique;
       }
       printf("%d\n",s);
   }
    return 0;
}
#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   while(n--)
   {
       int s = 0;///total sum is 0
       int a;
       scanf("%d",&a); ///how many sheep he count
       int b[a];///make a array of number of those counted sheep
       for(int i = 0;i<a;i++)
       {
           scanf("%d",&b[i]);///take all the unique number of sheep he count
       }
       for(int i = 0;i<a;i++)
       {
           int t = 1;
           for(int j = i+1;j<a;j++)
           {
               if(b[i]==b[j])
               {
                   t=0;
                   break;///if count twice then break and do for the next and t = 0;
               }
           }
           s+=t; ///make the sum of if its unique;
       }
       printf("%d\n",s);
   }
    return 0;
}

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       int a,b;
       scanf("%d %d",&a,&b);
       int ride = 1;
       int s = 0;
       for(int i = 0;i<a;i++)
       {
           int ab;
           scanf("%d",&ab);
           s+=ab;
           if(s>b) ///if sum is bigger than capacity (b)
           {
               ride++; ///then one more ride need
               s = ab; ///and start with this item with a new ride;
           }
       }
       printf("%d\n",ride);

    }
    return 0;
}


#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)&&n!=0)
    {
        for(int i = 1;i<=n;i++)
        {
          float a,b,c;
           scanf("%f %f %f",&a,&b,&c);
           printf("Size #%d:\n",i);
           printf("Ice Cream Used: %.2f cm2\n",((b+c)/2)*5*a); ///area of trapiziam and product 5 because it has 5 side
        }
        printf("\n");
    }

    return 0;
}


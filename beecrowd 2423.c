#include<stdio.h>
int main()
{
    int a[3];
    for(int i = 0;i<3;i++)
    {
        scanf("%d",&a[i]);
        if(i==0) a[i] = a[i]/2;
        if(i==1) a[i] = a[i]/3;
        if(i==2) a[i] = a[i]/5;
    }
    int l = a[0];
    for(int i = 1;i<3;i++)
    {
        if(a[i]<l) l = a[i];
    }
    printf("%d\n",l);
    return 0;
}


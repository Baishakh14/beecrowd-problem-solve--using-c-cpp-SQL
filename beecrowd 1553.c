#include<stdio.h>
int main()
{
  int a,b;
while( scanf("%d %d",&a,&b) &&(a||b))
{
    int n[a];
    for(int i = 0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    int c = 0;
    for(int i = 1;i<=a;i++)
    {
        int d = 0;
        for(int j = 0;j<a;j++)
        {
            if(i==n[j]) d++;
        }
        if(d>=b) c++;
    }
    printf("%d\n",c);
}

    return 0;
}


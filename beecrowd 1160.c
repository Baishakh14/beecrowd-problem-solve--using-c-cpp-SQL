#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    while(a>0)
    {
        int x,y;
        int c = 0;
        double i,j;
        scanf("%d %d %lf %lf",&x,&y,&i,&j);
        while(x<=y)
        {
           x = x+(x*i)/100;
           y = y+(y*j)/100;
           c++;
           if(c>100)break;
        }
        if(c>100)printf("Mais de 1 seculo.\n");
        else
        printf("%d anos.\n",c);
          a--;
    }

    return 0;
}


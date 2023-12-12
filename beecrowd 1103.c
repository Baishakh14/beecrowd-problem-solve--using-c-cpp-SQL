#include<stdio.h>
int main()
{
    unsigned int a,b,c,d;
    while(1)
    {
        scanf("%u%u%u%u",&a,&b,&c,&d);
        unsigned int i;
        if(a==0&&b==0&&c==0&&d==0)
            break;
        else if(c>a&&d>=b)
        {
           i = ((c-a)*60)+(d-b);
        }
        else if(c>a&&b>d)
        {
            i = ((c-a)*60)-(b-d);
        }
        else if(a>c&&b>=d)
        {
            i = (((24-a+c)*60)-60)+((60-b)+d);
        }
        else if(a==c&&b>=d)
        {
            i = (24*60-(b-d));
        }
        else if(a==c&&d>b)
        {
            i = (d-b);
        }
        else if(a>c&&d>b)
        {
            i = (24-a+c)*60+d-b;
        }

        printf("%u\n",i);
    }


    return 0;
}


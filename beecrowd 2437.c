#include<stdio.h>
#include<math.h>
int main()
{
    unsigned int a[4];
    for(int i = 0;i<4;i++)
    {
        scanf("%u",&a[i]);
    }
    printf("%u\n",abs(a[0]-a[2])+abs(a[1]-a[3]));

    return 0;
}


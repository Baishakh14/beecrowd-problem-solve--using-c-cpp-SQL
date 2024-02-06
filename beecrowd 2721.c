#include<stdio.h>
int main()
{
    int s = 0;
    char a[9][100] = {"Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen", "Rudolph"};
    ///you can also declare a two dimensional array string which contain more than 1 string by this(*a[]);
    for(int i = 0;i<9;i++)
    {
        int x;
        scanf("%d",&x);
        s+=x;
    }
    printf("%s\n",a[(s-1)%9]);
    return 0;
}


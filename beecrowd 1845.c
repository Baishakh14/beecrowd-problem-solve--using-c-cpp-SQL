#include<stdio.h>
int main()
{
    char x,y;
    while(scanf("%c",&x)!=EOF)
    {
        if(x == 'b' || x == 'j' || x == 'p' || x == 's' || x == 'v' || x == 'x' || x == 'z')
            x = 'f';
        else if(x == 'B' || x == 'J' || x == 'P' || x == 'S' || x == 'V' || x == 'X' || x == 'Z')
            x = 'F';
        if((x != 'f' && x != 'F') || (y != 'f' && y != 'F')) printf("%c",x);
        y = x;
    }
 return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
    char a,b[101];
    while(1)
    {
    int z = 0,f = 0;
        scanf(" %c %s",&a,b);
        if(a=='0'&&b[0]=='0')
            break;
        int l = strlen(b);
        for(int i = 0;i<l;i++)
        {
            if(b[i]==a) continue;
            z = (b[i]!='0')||z;
            if(z)
            {
                printf("%c",b[i]);
                f = 1;
            }
        }
        if(f==0) printf("0");
        printf("\n");
    }

    return 0;
}


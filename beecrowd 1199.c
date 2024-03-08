#include<stdio.h>
#include<stdlib.h>
int main()
{
    while(1)
    {
        int n;
        char a[100];
        scanf("%s",a); ///take number as string
        n = atoi(a);  ///converting number in int using atoi function
        if(a[0]=='-') return 0; ///if first is - that means number is negetive number and program stop
        if(a[1]=='x') ///if second is x mean it hexadecimal number
        {
            sscanf(a,"%X",&n); ///sscanf used to take string from a store in n making it hexadecimal number thats why %x used here
            printf("%d\n",n);
        }
        else printf("0x%X\n",n); ///if not print the decimal number which stored in n converting in hexadecimal number using %x;
    }

    return 0;
}


#include<stdio.h>
int main()
{
    int n;
scanf("%d",&n);
for(int i = 0;i<n;i++)
{
    unsigned short ab;
    scanf("%hx",&ab); ///taking hexadecimal number
    if(ab!=' ') printf("%c",ab);
}
  printf("\n");
    return 0;
}


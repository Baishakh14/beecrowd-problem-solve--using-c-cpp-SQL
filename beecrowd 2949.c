#include<stdio.h>
int main()
{
 int n,h = 0,hu = 0,e = 0,a = 0,m = 0;
 scanf("%d",&n);
 char ab[100],b;
 for(int i = 0;i<n;i++){
    scanf("%s %c",ab,&b);
    if(b=='A') a++;
    if(b=='E') e++;
    if(b=='H') hu++;
    if(b=='M') m++;
    if(b=='X') h++;
 }
printf("%d Hobbit(s)\n",h);
printf("%d Humano(s)\n",hu);
printf("%d Elfo(s)\n",e);
printf("%d Anao(oes)\n",a);
printf("%d Mago(s)\n",m);
    return 0;
}


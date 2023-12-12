#include<stdio.h>
int main()
{
    int a,b,t,ac=0,bc=0,d=0,x=0;
    y:
    scanf("%d%d",&a,&b);
    x++;
            if(a>b) ac++;
        if(b>a) bc++;
        if(a==b) d++;
    n:
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d",&t);
    if(t!=1&&t!=2)
    {
        goto n;
    }
    else if(t==1)
    {
        goto y;
    }
    else if(t==2)
    {
        printf("%d grenais\n",x);
        printf("Inter:%d\n",ac);
        printf("Gremio:%d\n",bc);
        printf("Empates:%d\n",d);
        if(a>b)printf("Inter venceu mais\n");
        if(b>a)printf("Gremio venceu mais\n");
        if(a==b)printf("Nao houve vencedor\n");
        exit(0);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int bns; ///bonous;
        scanf("%d",&bns);
        int a[3],b[3];
        int dv,gv; ///dabriel pokemon and gabriel pokeamon;
        ///int int dp,gp; ///dabriel pokemon and gabriel pokeamon;
        for(int i = 0;i<3;i++)
        {
            scanf("%d",&a[i]);
        }
        dv = (a[0]+a[1])/2;
        if(a[2]%2==0) dv+=bns;
        for(int i = 0;i<3;i++)
        {
            scanf("%d",&b[i]);
        }
        gv = (b[0]+b[1])/2;
        if(b[2]%2==0) gv+=bns;
        if(dv==gv) printf("Empate\n");
        else if(dv>gv) printf("Dabriel\n");
        else printf("Guarte\n");

    }
    return 0;
}


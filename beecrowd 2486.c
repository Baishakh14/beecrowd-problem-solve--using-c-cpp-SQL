#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    while(scanf("%d",&n),n)
    {
    int s = 0;
        char a[1001];
        int b;
        for(int i = 0;i<n;i++)
        {

        scanf("%d %[^\n]%*c",&b,a);
        //getchar();
        if(strcmp(a,"suco de laranja")==0)
        {
            s+=b*120;
        }
        if(strcmp(a,"morango fresco")==0)
        {
            s+=b*85;
        }
        if(strcmp(a,"mamao")==0)
        {
            s+=b*85;
        }
         if(strcmp(a,"goiaba vermelha")==0)
        {
            s+=b*70;
        }
         if(strcmp(a,"manga")==0)
        {
            s+=b*56;
        }
        if(strcmp(a,"laranja")==0)
        {
            s+=b*50;
        }
        if(strcmp(a,"brocolis")==0)
        {
            s+=b*34;
        }
        }
        if(s>130) printf("Menos %d mg\n",s-130);
        else if(s<110) printf("Mais %d mg\n",110-s);
        else if(s>=110&&s<=130) printf("%d mg\n",s);
    }

    return 0;
}


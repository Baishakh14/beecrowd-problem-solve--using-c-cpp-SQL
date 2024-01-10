#include<stdio.h>
///#include<string.h>
int main()
{
        float tg = 0;
        float tk = 0;
    int n;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++)
    {
        float f;
        char a[10000];
        int m = 0;
        scanf("%f",&f);
        tk+=f;
        scanf(" %[^\n]",a);
        char *ab = strtok(a," ");
        while(ab!=NULL)
       {
            m++;
            ab = strtok(NULL," "); /// both are right and accpted
       }
//for(int j = 0;a[j]!='\0';j++)
//{
//    if(a[j]==' ') m++;
//}
//m+=1;
        tg+=m;
        printf("day %d: %d kg\n",i,m);
    }
printf("%.2f kg by day\n",tg/n);
printf("R$ %.2f by day\n",tk/n);
    return 0;
}


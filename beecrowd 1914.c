#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int a = 0;a<t;a++)
    {
        char p1[100],p2[100],c1[10],c2[10];
        scanf("%s %s %s %s",p1,c1,p2,c2);
        int n1,n2;
        scanf("%d %d",&n1,&n2);
        if((n1+n2)%2==0)
        {
            if(strcmp(c1,"PAR")==0)
            {
                printf("%s\n",p1);
            }
            else
                printf("%s\n",p2);
        }
        else
        {
            if(strcmp(c1,"IMPAR")==0)
            {
                printf("%s\n",p1);
            }
            else
            {
                printf("%s\n",p2);
            }
        }

    }

    return 0;
}


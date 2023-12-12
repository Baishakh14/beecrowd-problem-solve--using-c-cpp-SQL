#include<stdio.h>
int main()
{
    char a[100];
    int i,j,l;
    while(gets(a)!=NULL)
    {
        j = 0;
        l = strlen(a);
        for(i = 0;i<l;i++)
        {
            if(a[i]!=' ')
            {
                j++;
                if(a[i]>96&&j%2==1)
                    a[i]-=32;
                else if(a[i]<96&&j%2==0)
                a[i]+=32;
            }
            //a[l]=0;
            printf("%c",a[i]);
        }
        //or here
       // printf("%s\n",a);
        printf("\n");
    }

    return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int ca = 0;
        int a;
        scanf("%d",&a);
        char ab[30];
        char ba[30];
        scanf(" %[^\n]",ab);
        strcpy(ba,ab);
        for(int i = 0;i<strlen(ba);i++)
        {
            for(int j = i+1;j<strlen(ba);j++)
            {
                if(ba[j]<ba[i])
                {
                    char abc = ba[i];
                    ba[i] = ba[j];
                    ba[j] = abc;
                }
            }
        }
        for(int i = 0;i<strlen(ba);i++)
        {
            if(ba[i]!=ab[i]) ca++;
            if(ca>2) break;
        }
        if(ca == 2) printf("There are the chance.\n");
        else printf("There aren't the chance.\n");
    }



    return 0;
}

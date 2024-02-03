#include<stdio.h>
#include<string.h>
int main()
{
int n;
scanf("%d",&n);
while(n--)
{
    char a[100][100];
    char b[100];
    scanf(" %[^\n]",b);
    int wc = 0;
    char *p = strtok(b," ");
    while(p!=NULL)
    {
        strcpy(a[wc],p); ///storing the words in another string array
        p = strtok(NULL," ");
        wc++;
    }
    for(int i = 0;i<wc;i++)
    {
        if((strstr(a[i],"oulupukk")!=NULL)&&strlen(a[i])==10)
        {
            strcpy(a[i],"Joulupukki");
        }
        if((strstr(a[i],"oulupukk")!=NULL)&&strlen(a[i])==11)
        {
            strcpy(a[i],"Joulupukki.");
        }
        printf("%s",a[i]);
        if(i<wc-1) printf(" ");
    }
    printf("\n");
}
    return 0;
}


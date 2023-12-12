#include<stdio.h>
int main()
{
    int a;
    int c = 0;
    char d;
    int n;
   scanf("%d",&n);

    for(int i = 0;i<n;i++)
    {
        scanf(" %c%d",&d,&a);
        // you can use a extra space before %c in scanf for escspe buffer or extra space
        if(d=='G')
        {
            c = c-a;
        }
        else
            c = c+a;
    }
    if(c>=0)
    {
        printf("A greve vai parar.\n");
    }
    else
        printf("NAO VAI TER CORTE, VAI TER LUTA!\n");

    return 0;
}


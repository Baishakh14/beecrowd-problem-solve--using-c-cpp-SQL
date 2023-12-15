#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char a[1000];
    while(scanf("%s",a)!=EOF)
    {
        int c[26] = {0};
        int d = 0;
        int length = strlen(a); // Calculate the length of the input string
        for(int i = 0; i<length; i++) // Corrected loop condition
        {
           if(isalpha(a[i]))
           {
               c[tolower(a[i])-'a']++;
           }
        }
        for(int i = 0; i < 26; i++)
        {
            if(c[i] % 2 == 1)
            {
                d++;
            }
        }
        if(d <= 1)
        {
            printf("0\n");
        }
        else printf("%d\n",d-1);
    }

    return 0;
}


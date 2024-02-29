#include <stdio.h>
#include <string.h>

int main()
{
    int b1, b2, l, r;
    char s[12]; // Increased size by 1 to accommodate the null terminator

    while(scanf("%s",s)!=EOF)
    {
        //s[strcspn(s, "\n")] = '\0'; // Remove the newline character if present
        l = 1, r = 9, b1 = b2 = 0;

        for(int i = 0; i < 9; ++i)
        {
            b1 += (l * (s[i] - '0'));
            b2 += (r * (s[i] - '0'));
            l++; r--;
        }

        b1 %= 11;
        b2 %= 11;

        if(b1 == 10) b1 = 0;
        if(b2 == 10) b2 = 0;

        printf("%c%c%c.%c%c%c.%c%c%c-%d%d\n", s[0], s[1], s[2], s[3], s[4], s[5], s[6], s[7], s[8], b1, b2);
    }

    return 0;
}


#include <stdio.h>
int main()
{

    char c;
    int n, m, ans, x, i;
    int run[200] = {'\0'};

    scanf("%d %d%*c", &n, &m);

    while (n--)
        scanf("%c %d%*c", &c, &x), run[c] = x;///storing number in the number of the character array

    ans = 0;
    scanf("%d%*c", &x);

    while (x--)
        scanf("%c%*c", &c), ans += run[c];///taking the char and store its value in ans

    printf("%d\n%s\n", ans, ans >= m ? "You shall pass!" : "My precioooous");

    return 0;

}


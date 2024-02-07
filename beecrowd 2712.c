#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdbool.h>

bool right(char a[]) {
    int n = strlen(a);
    if(n != 8) return false;
    for(int i = 0; i < 3; i++) {
        if(!isupper(a[i])) return false;
    }
    if(a[3]!='-') return false;
    for(int i = 4;i<n;i++)
    {
        if(!isdigit(a[i])) return false;
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    getchar();
    char a[10001];
    for(int i = 0; i < n; i++) {
        scanf("%s", a);
        if(right(a))
        {
            int x = a[7]-'0';
            if(x == 1||x == 2) printf("MONDAY\n");
            else if(x == 3||x == 4) printf("TUESDAY\n");
            else if(x == 5||x == 6) printf("WEDNESDAY\n");
            else if(x == 7||x == 8) printf("THURSDAY\n");
            else if(x == 9||x == 0) printf("FRIDAY\n");
        }
        else printf("FAILURE\n");
    }

    return 0;
}


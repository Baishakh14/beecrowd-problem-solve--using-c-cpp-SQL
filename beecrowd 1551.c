#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int main() {
    int N;
    scanf("%d", &N);
    getchar(); // Clear the newline character from the input buffer

    while (N--) {
        char s[1001];
        fgets(s, sizeof(s), stdin);
        bool arr[26] = {false};

        for (int i = 0; i < strlen(s); i++) {
            if (isalpha(s[i]) && islower(s[i])) {
                arr[s[i] - 'a'] = true;
            }
        }

        int c = 0;
        for (int i = 0; i < 26; i++) {
            if (arr[i]) {
                c++;
            }
        }
        if (c == 26) {
            printf("frase completa\n");
        } else if (c >= 13 && c < 26) {
            printf("frase quase completa\n");
        } else {
            printf("frase mal elaborada\n");
        }
    }

    return 0;
}

//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//    int n;
//    scanf("%d",&n);
// while(n>0)
// {
//     char a[1000];
//     scanf(" %[^\n]",a);
//     int c[128] = {0};
//     int cu = 0;
//     for(int i = 0 ;i<strlen(a);i++)
//     {
//         if(isalpha(a[i]))
//         {
//            c[a[i]] = 1;
//         }
//     }
//     for(int i = 97;i<=122;i++)
//     {
//         if(c[i])
//         {
//             cu++;
//         }
//     }
//        if (cu == 26) {
//            printf("frase completa\n");
//        } else if (cu >= 13 && cu < 26) {
//            printf("frase quase completa\n");
//        } else {
//            printf("frase mal elaborada\n");
//        }
//     n--;
// }
//return 0;
//}
//

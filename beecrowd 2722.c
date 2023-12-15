//#include<stdio.h>
//#include<string.h>
//int main()
//{
//  int n;
//  scanf("%d",&n);
//  while(n>0)
//  {
//     char a[100];
//     char b[100];
//     char c[200] = {'\0'}; ///  "" can also define a null string or you can say empty string
//     scanf(" %[^\n]",a);
//     scanf(" %[^\n]",b);
//      for(int i = 0;i<strlen(a);i+=2)
//      {
//          strncat(c,&a[i],2);
//          strncat(c,&b[i],2);
//      }
//      printf("%s\n",c);
//     n--;
//  }
//
//
//    return 0;
//}
//
#include <stdio.h> ///same output
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n > 0) {
        char a[100], b[100];
        scanf(" %[^\n]", a);
        scanf(" %[^\n]", b);

        int len_a = strlen(a);
        int len_b = strlen(b);

        int i = 0, j = 0;

        while (i < len_a || j < len_b) {
            for (int ca = 0; ca < 2 && i < len_a; ca++) {
                printf("%c", a[i]);
                i++;
            }

            for (int cb = 0; cb < 2 && j < len_b; cb++) {
                printf("%c", b[j]);
                j++;
            }
        }

        printf("\n");
        n--;
    }

    return 0;
}

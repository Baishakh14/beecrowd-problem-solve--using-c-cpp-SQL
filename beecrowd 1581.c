#include<stdio.h>
#include<string.h>
int main()
{
   int n;
   scanf("%d",&n);
   //getchar(); ///remove input buffer
    while(n>0)
    {
        int c = 0;
        char a[21];
        char b[21] = {0};
      int t;
      scanf("%d",&t);
      scanf(" %s",a);
      for(int i = 1;i<t;i++)
      {
          scanf(" %s",b);
          if(strcmp(a,b))
          {
              c++;
          }
          }
       if(c==0) printf("%s\n",a);
        else printf("ingles\n");
        n--;
    }

    return 0;
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    int testcase;
    scanf("%d", &testcase);

    while (testcase > 0) {
        char people_lan[100][21];
        int people;
        scanf("%d", &people);

        for (int j = 0; j < people; j++) {
            scanf("%s", people_lan[j]);
        }

        int count = 0;
        for (int j = 1; j < people; j++) {
            if (strcmp(people_lan[0], people_lan[j]) == 0) {
                count++;
            }
        }

        if (count == people - 1) {
            printf("%s\n", people_lan[0]);
        } else {
            printf("ingles\n");
        }
        testcase--;
    }

    return 0;
}
*/


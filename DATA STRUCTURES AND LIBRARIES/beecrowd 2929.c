
#include<stdio.h>
#include<string.h>
int min( int a[], int n)  ///find minimum number from stack;
{
   int m = a[0];
   for(int i = 1;i<=n;i++)
   {
       if(a[i]<m) m = a[i];
   }
   return m;
}
   int a[1000000];  ///for using stack;
int main()
{
    int top = -1; ///first nothing in top of stack;
    int n;
    scanf("%d",&n);  ///total number of operation
    while(n--)
    {
        char ab[1001];
        scanf(" %[^\n]",ab);   ///taking input what user want;
        if(strcmp(ab,"POP") == 0)
        {
            if(top<0)
            {
                 printf("EMPTY\n");   ///if stack is empty the nothing is pop
                 continue;
            }
            top = top-1;  ///else top -- so that top element is removed from stack;

        }
        else if(strcmp(ab,"MIN") == 0 )
        {
            if(top<0)  ///if top is less 0 it mean stack is empty nothing can minimum stack is empty no value;
            {
                printf("EMPTY\n");
                continue;
            }
                   printf("%d\n",min(a,top));  ///else print top by calling top funciton
        }
        else  ///else find the number
        {
            char ba[100001];
            int j = 0;
            int x = 0;
            int l = strlen(ab);
            for(int i = 0;i<l;i++)
            {
            if(ab[i]==' ') ///if we found space then make x true and continuue;
            {
                x = 1;
                continue;
            }
            if(x == 1)
            {
                ba[j] = ab[i];  ///then store the number in ba array
                j++;
            }
            }
            ba[j] = '\0';  ///add null so that it be a string
           int num = atoi(ba);  ///convcert ba into number by atoi function
        top++; ///add top
        a[top] = num;  ///and store value in top;
        }
    }
    return 0;
}

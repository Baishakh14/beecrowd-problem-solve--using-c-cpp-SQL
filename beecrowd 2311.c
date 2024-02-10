
#include<stdio.h>
#define size 7
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        char a[1001];
        scanf("%s ",a);
        float target;
        scanf(" %f",&target);
        float n[size];
        for(int i = 0;i<size;i++)
        {
            scanf("%f",&n[i]);
        }
        for(int i = 0;i<size-1;i++)
        {
            int swap = 0;
            for(int j = 0;j<size-1-i;j++)
            {
                if(n[j]>n[j+1])
                {
                    float t = n[j]; ///bubble sorting for sorting the array
                    n[j] = n[j+1];
                    n[j+1] = t;
                    swap = 1;
                }
            }
            if(swap == 0) break;
        }
//        for(int i = 0;i<size;i++)
//        {
//            printf("%f ",n[i]);
//        }
        //printf("\n");
        float s = 0;
        for(int i = size-2;i>0;i--)
        {
///            printf("%f ",n[i]); ///remove the top and small value and sum them
              s+=n[i];
        }
        printf("%s %.2f\n",a,s*target); ///print what they want
    }

    return 0;
}

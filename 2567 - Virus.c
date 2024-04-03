#include<stdio.h>
#include<math.h>
void bs(int a[],int s) ///Bubble sort with high performance
{
//    int itt = 0;
    for(int i = 0;i<s;i++)
    {
        int c = 0;
        for(int j = 0;j<s-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                c++;
                int t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
        if(c==0) break;
        //itt++;
    }
//    printf("total itteration is %d \n",itt);
}
int main()
{
int n;
while(scanf("%d",&n)!=EOF)
{
    int a[n];
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bs(a,n);
    int s = 0;
    int i = 0;
    int j = n-1;
    while(i<j)
    {
        s+=abs(a[i]-a[j]);
        i++;
        j--;
    }
    printf("%d\n",s);
}
    return 0;
}


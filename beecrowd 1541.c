#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
while(1)
{
    scanf("%d%d%d",&a,&b,&c);
    if(a==0) exit(0); ///break; //return 0 exit(0)
    int n = ((a*b)*100)/c;
    int l = (int)sqrt(n);
    printf("%d\n",l);

}
    return 0;
}


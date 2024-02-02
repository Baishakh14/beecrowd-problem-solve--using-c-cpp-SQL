#include<stdio.h>
int main(){
int a,b;
scanf("%d %d",&a,&b);
int n[a];
int c = 0;
for(int i = 0;i<a;i++)
{
    scanf("%d",&n[i]);
    if(n[i]<=0)
    {
        c++;
    }
}
if(c>=b) printf("YES\n");
else printf("NO\n");

return 0;
}


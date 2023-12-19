#include<stdio.h>
#include<string.h>
int main()
{
    unsigned n; ///only positive int.you can use unsigned int (also)
    scanf("%u",&n);
    char a[n][100];
    int d = 0;
    for(int i = 0;i<n;i++)
    {
        scanf("%s%*c",a[i]);
    }
    for(int i = 0;i<n;i++)
    {
    int c = 1;  ///for count the unique pokemon
        for(int j = i+1;j<n;j++){
                if(strcmp(a[i],a[j])==0){
                c = 0; /// if matched c = 0 else c = 1
                break;
                }
        }
        d+=c;
    }
    int p = 151-d;
    printf("Falta(m) %d pomekon(s).\n",p);
    return 0;
}


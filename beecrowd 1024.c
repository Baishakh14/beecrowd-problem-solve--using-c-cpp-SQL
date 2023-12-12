//Bismillahi Rahmanir Rahim
#include<stdio.h>
#include<string.h>
int main()
{
   int n,i;
   scanf("%d",&n);
   getchar();
   while(n>0)
   {
     char a[1000];
     gets(a);
     for(int i = 0;a[i]!='\0';i++)
     {
         if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))
         {
             a[i] = a[i]+3;
         }

         //printf("%c",a[i]);
     }
     //printf("\n");
        char b[1000];
        strcpy(b,a);
        //strrev(b);
       int k =  strlen(b);
       // printf("%s\n",b);
        k = k-1;
        int l = k/2;
        for(k;k>=0;k--)
        {
            if(k<=l)
            {
                //b[k] = b[k]-1;
            printf("%c",b[k]-1);
            }
            else
                printf("%c",b[k]);
        }
        printf("\n");


       n--;
   }

    return 0;
}


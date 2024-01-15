#include<stdio.h>
int main()
{
   int a[6];
   int b[6];
   int c = 0;
   for(int i = 0;i<6;i++)
   {
       scanf("%d",&a[i]);
   }
       for(int i = 0;i<6;i++)
   {
       scanf("%d",&b[i]);
   }
      for(int i = 0;i<6;i++)
   {
      for(int j = 0;j<6;j++)
      {
          if(a[i]==b[j])
          {
              c++;
              break;
          }
      }
   }
   	if (c == 3)
		printf("terno\n");
	else if (c == 4)
		printf("quadra\n");
	else if (c== 5)
		printf("quina\n");
	else if (c == 6)
		printf("sena\n");
	else if (c < 3)
		printf("azar\n");
    return 0;
}


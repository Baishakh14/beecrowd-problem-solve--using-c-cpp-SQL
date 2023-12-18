#include<stdio.h>
#include<stdlib.h>
int main()
{
  char n[100];
  char c[100];
  while(scanf(" %s %s",n,c)!=EOF)
  {
      int b = atoi(n); ///convert string n into number
      double a = atof(n)-atoi(n); ///first convert n into float using atof then minus it
      if(a>atof(c)) b++;
      printf("%d\n",b);
  }

    return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
 int n;
 scanf("%d",&n);
 int ar,bo,mu,de;
 ar=bo=mu=de=0;
 while(n--)
 {
 char a[100],b[100];
 int h;
 scanf("%s %s %d",a,b,&h); ///making sum all these elfs works hour
if(strcmp(b,"arquitetos")==0) ar = ar+h;
if(strcmp(b,"bonecos")==0) bo = bo+h;
if(strcmp(b,"musicos")==0) mu = mu+h;
if(strcmp(b,"desenhistas")==0) de = de+h;
 }
 ar = ar/4;///how many products they can make in this time no fractional number
 bo = bo/8;
 mu = mu/6;
 de = de/12;
 printf("%d\n",ar+bo+mu+de); ///and sum them
  return 0;
}


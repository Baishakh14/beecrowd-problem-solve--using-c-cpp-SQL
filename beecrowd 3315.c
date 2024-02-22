///Bismillahi Rahmanir Rahim
///Allah is watching me
#include<stdio.h>
int main()
{
  int date[] = {31,28,31,30,31,30,31,31,30,31,30,31}; ///days of month stored in array;
    int pd,pm; ///present date, present month;
    int dd,dm; ///destinition date, destination month;
    scanf("%d %d %d %d",&pd,&pm,&dd,&dm);
    int t;
    if(pm!=dm)
    {
    t = 0;
    int x = date[pm-1]-pd; ///storing extra date from present month in x;
    for(int i = pm;i<dm-1;i++)
    {
        t+=date[i]; ///for loop from the next and last one and stores days in t;
    }
      t+=dd; ///add the last month dates;
      t+=x; ///add the extra dates from x which stored before;
    }
    else if(pm==dm) ///if present month and destination month is equal then just simply calculate the date from destination to present;
    {
        t = dd-pd;
    }
    printf("%d\n",t);
    return 0;
}


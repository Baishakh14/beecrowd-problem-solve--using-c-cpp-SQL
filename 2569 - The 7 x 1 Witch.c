#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    char a[10001];
    scanf("%[^\n]",a); ///taking the numbers as
    char b[2][1001]; ///make 2d array first is 2 number because number will 3 and second is
    /// second is total size of char can store;
    int l = strlen(a); ///find the length of a;
    int j = 0,k = 0;
    char ab; ///new char to store is it + or x?
    for(int i = 0;i<l;i++) ///in this loop if any number is 7 then store 0 otherwise remain same
    {
        if(a[i]=='7')  ///if 7 then store 0
        {
            b[j][k] = '0';
            k++;
        }
        else if(a[i]!='+' && a[i]!='x' && a[i]!=' ') ///if non of these then store normal
        {
            b[j][k] = a[i];
            k++;
        }
      else if(a[i]=='+'||a[i]=='x') ///if find operator then go the next number of 2d array
        ///j++ and k make 0 so that it start from 0 store;
        {
            ab = a[i];
            j++;
            k = 0;
        }
    }

   /// printf("%s %s\n",b[0],b[1]); ///checking the numbers in 2d array
    int xy; ///for sum or multiply the numbers;
    int x = atoi(b[0]);
    int y = atoi(b[1]);  ///convert and store in int x,y using atoi function
    if(ab == '+') xy = x+y;
    else if(ab == 'x') xy = x*y; ///find the value;
    ///printf("%d\n",xy);
    //if(xy==7) xy = 0;
    char abc[1001];///new char for convert the number in string value;
    sprintf(abc,"%d",xy); ///convert number to string using sprintf function
    int ln = strlen(abc); ///find length this new string
    char cd[1001];
    int ij = 0;
    for(int i = 0;i<ln;i++)
    {
        if(abc[i]!='7')
        {
            cd[ij] = abc[i]; ///do same if not 7 store
            ij++;
        }
        if(abc[i]=='7')
        {
            cd[ij] = '0'; ///if 7 store 0 in new array cd;
            ij++;
        }
    }
    cd[ij] = '\0'; ///add null so that compiler understand the cd is a string
    int bk;
    bk = atoi(cd); ///convert cd into bk int using atoi;
    printf("%d\n",bk); ///and print it;

    return 0;
}

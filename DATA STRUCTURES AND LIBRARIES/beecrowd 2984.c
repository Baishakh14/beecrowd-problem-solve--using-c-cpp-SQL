#include<stdio.h>
#include<string.h>
int main()
{
  int sb = 0; ///starting bracket
  ///int eb = 0; ///ending bracket
    char a[1000001];
    scanf("%s",a);
    int l = strlen(a);
    for(int i = 0;i<l;i++)
    {
        if(a[i] == '(') sb++;
        else if(a[i] == ')')
        {
            if(sb>0)
            {
                sb--;
            }
        }
    }
    if(sb>0) printf("Ainda temos %d assunto(s) pendente(s)!\n",sb);
    else printf("Partiu RU!\n");
    return 0;
}


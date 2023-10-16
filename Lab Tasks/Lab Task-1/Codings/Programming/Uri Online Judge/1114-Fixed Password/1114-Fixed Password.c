//1114-Fixed Password
#include<stdio.h>

int main()
{
    int x;
    for(;;)
    {
        scanf("%d",&x);
        if(x==2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
        {
            printf("Senha Invalida\n");
        }
    }
    return 0;
}

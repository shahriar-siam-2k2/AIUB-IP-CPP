//1131-Grenais
#include<stdio.h>

int main()
{
    int i,g,n=0,a,I=0,G=0,E=0;
    for(;;)
    {
        scanf("%d %d",&i,&g);
        printf("Novo grenal (1-sim 2-nao)\n");
        n++;//reading grenais
        if(i>g)
        {
            I++;
        }
        else if(g>i)
        {
            G++;
        }
        else if(i==g)
        {
            E++;
        }
        scanf("%d",&a);
        if(a==2)
        {
            break;
        }
    }
    printf("%d grenais\n",n);
    printf("Inter:%d\n",I);
    printf("Gremio:%d\n",G);
    printf("Empates:%d\n",E);
    if(I>G)
    {
        printf("Inter venceu mais\n");
    }
    else if(I==G)
    {
        printf("Não houve vencedor\n");
    }
    else
    {
        printf("Gremio venceu mais\n");
    }
    return 0;
}

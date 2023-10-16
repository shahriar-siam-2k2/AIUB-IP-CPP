//1046-Game Time
#include<stdio.h>

int main()
{
    int a,b,dur;
    scanf("%d %d",&a,&b);
    
    if(a>b)
    {
        dur=(b+24)-a;
        printf("O JOGO DUROU %d HORA(S)\n",dur);
    }
    else if(a<b)
    {
        dur=b-a;
        printf("O JOGO DUROU %d HORA(S)\n",dur);
    }
    else if(a==b)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    
    return 0;
}
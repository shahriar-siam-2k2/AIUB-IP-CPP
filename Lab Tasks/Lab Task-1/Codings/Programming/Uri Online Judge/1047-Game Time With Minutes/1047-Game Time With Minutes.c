//1047-Game Time With Minutes
#include<stdio.h>

int main()
{
    int h1,h2,m1,m2,durh,durm;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    if(h1==h2 && m1==m2)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if(h1==h2)
    {
        if(m1<m2)
        {
            durm=m2-m1;
            printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",durm);
        }
        else
        {
            durm=(m2+60)-m1;
            printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n",durm);
        }
    }
    else if(h1<h2)
    {
        if(m1<m2)
        {
            durh=h2-h1;
            durm=m2-m1;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",durh,durm);
        }
        else if(m1==m2)
        {
            durh=h2-h1;
            printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n",durh);
        }
        else
        {
            durh=(h2-h1)-1;
            durm=(m2+60)-m1;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",durh,durm);
        }
    }
    else if(h1>h2)
    {
        if(m1<m2)
        {
            durh=(h2+24)-h1;
            durm=m2-m1;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",durh,durm);
        }
        else if(m1==m2)
        {
            durh=(h2+24)-h1;
            printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n",durh);
        }
        else
        {
            durh=((h2+24)-h1)-1;
            durm=(m2+60)-m1;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",durh,durm);
        }
    }
    return 0;
}



//1094-Experiments
#include<stdio.h>

int main()
{
    int n,i,a,C=0,R=0,S=0,total;
    double PC,PR,PS;
    char c;
    scanf("%d",&n);
    for(i=0 ; i<n ; i++)
    {
        scanf("%d %c",&a,&c);
        if(c=='C')
        {
            C+=a;
        }
        else if(c=='R')
        {
            R+=a;
        }
        else if(c=='S')
        {
            S+=a;
        }
    }
    total= C+R+S;
    PC=(C*100.00)/total;
    PR=(R*100.00)/total;
    PS=(S*100.00)/total;

    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",C);
    printf("Total de ratos: %d\n",R);
    printf("Total de sapos: %d\n",S);

    printf("Percentual de coelhos: %0.2lf %\n",PC);
    printf("Percentual de ratos: %0.2lf %\n",PR);
    printf("Percentual de sapos: %0.2lf %\n",PS);
    return 0;
}

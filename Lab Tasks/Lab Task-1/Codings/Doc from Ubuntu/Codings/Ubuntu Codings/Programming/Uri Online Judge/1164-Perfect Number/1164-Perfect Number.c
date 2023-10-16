//1164-Perfect Number
#include<stdio.h>

int main()
{
    int i,j,n,x,s,a=0;
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++)
    {
        scanf("%d",&x);
        for(j=1 ; j<x ; j++)
        {
            if(x%j==0)
            {
                s=j+a;
                a=s;
            }
        }
        if(s==x)
        {
            printf("%d eh perfeito\n",x);
        }
        else
        {
            printf("%d nao eh perfeito\n",x);
        }
        a=0;
    }
    return 0;
}


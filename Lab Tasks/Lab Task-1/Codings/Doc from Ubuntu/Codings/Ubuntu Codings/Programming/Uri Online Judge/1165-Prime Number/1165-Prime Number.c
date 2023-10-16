//1165-Prime Number
#include<stdio.h>

int main()
{
    int n,x,i,j,a=0;
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++)
    {
        scanf("%d",&x);
        for(j=1 ; j<=x ; j++)
        {
            if(x%j==0)
            {
                a++;
            }
        }
        if(a==2)
        {
            printf("%d eh primo\n",x);
        }
        else
        {
            printf("%d nao eh primo\n",x);
        }
        a=0;
    }
    return 0;
}

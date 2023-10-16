//1180-Lowest Number and Position
#include<stdio.h>

int main()
{
    int n,i,j,x,p,y,z;
    scanf("%d",&n);
    int X[1005];
    for(j=0 ; j<n ; j++)
    {
        scanf("%d",&x);
        X[j]=x;
    }
    y = X[0];
    for(i=1 ; i<n ; i++)
    {
        if(X[i] < y)
        {
            y = X[i];
            p = i;
        }
    }
    printf("Menor valor: %d\n",y);
    printf("Posicao: %d\n",p);
    return 0;
}

//1175-Array change I
#include<stdio.h>

int main()
{
    int i,j,y,N[20],x;
    for(i=19 ; i>=0 ; i--)
    {
        scanf("%d",&x);
        N[i]=x;
    }
    for(i=0 ; i<20 ; i++)
    {
        printf("N[%d] = %d\n",i,N[i]);
    }
    return 0;
}

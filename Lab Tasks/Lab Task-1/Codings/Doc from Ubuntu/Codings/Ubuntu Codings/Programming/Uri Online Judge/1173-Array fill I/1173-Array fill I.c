//1173-Array fill I
#include<stdio.h>

int main()
{
    int N[10],i,v;
    scanf("%d",&v);
    for(i=0 ; i<10 ; i++)
    {
        N[i]=v;
        printf("N[%d] = %d\n",i,N[i]);
        v=v*2;
    }
    return 0;
}

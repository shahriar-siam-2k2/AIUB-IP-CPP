//1177-Array Fill II
#include<stdio.h>

int main()
{
    int t,i,x=0,N[1000];
    scanf("%d",&t);
    for(i=0 ; i<1000 ; i++)
    {
        printf("N[%d] = %d\n",i,x);
        x++;
        if(t==x)
        {
            x=0;
        }
    }
    return 0;
}

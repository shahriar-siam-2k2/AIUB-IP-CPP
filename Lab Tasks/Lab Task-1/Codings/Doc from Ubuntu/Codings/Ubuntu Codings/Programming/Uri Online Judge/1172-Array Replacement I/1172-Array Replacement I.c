//1172-Array Replacement I
#include<stdio.h>

int main()
{
    int x[10],i;
    for(i=0 ; i<10 ; i++)
    {
        scanf("%d",&x[i]);
        if(x[i]<=0)
        {
            printf("X[%d] = 1\n",i);
        }
        else
        {
            printf("X[%d] = %d\n",i,x[i]);
        }
    }
    return 0;
}

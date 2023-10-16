//1178-Array Fill III
#include<stdio.h>

int main()
{
    double N[100],x,y;
    int i;
    scanf("%lf",&x);
    for(i=0 ; i<100 ; i++)
    {
        N[i]=x;
        printf("N[%d] = %0.4lf\n",i,N[i]);
        x=x/2.0;
    }
    return 0;
}

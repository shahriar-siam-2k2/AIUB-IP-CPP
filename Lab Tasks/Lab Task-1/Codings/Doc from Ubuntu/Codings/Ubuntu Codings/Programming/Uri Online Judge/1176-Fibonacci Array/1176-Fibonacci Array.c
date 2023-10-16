//1176-Fibonacci Array
#include<stdio.h>

int main()
{
    int i,t,n;
    long long int Fib[61],x;
    Fib[0]=0;
    Fib[1]=1;
    for(i=2 ; i<=60 ; i++)
    {
        Fib[i] = Fib[i-1] + Fib[i-2];
    }
    scanf("%d",&t);
    for(i=1 ; i<=t ; i++)
    {
        scanf("%d",&n);
        x=Fib[n];
        printf("Fib(%d) = %lld\n",n,x);
    }
    return 0;
}

//1153-Simple Factorial
#include<stdio.h>

int main()
{
    int n,i,a=1,k=1;
    scanf("%d",&n);
    for(i=n ; i>=1 ; i--)
    {
        k=i*k*a;
    }
    printf("%d\n",k);
    return 0;
}

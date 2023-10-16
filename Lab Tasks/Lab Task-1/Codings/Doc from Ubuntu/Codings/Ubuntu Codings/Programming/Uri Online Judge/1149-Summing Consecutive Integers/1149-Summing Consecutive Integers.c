//1149-Summing Consecutive Integers
#include<stdio.h>

int main()
{
    int i,a,n,k=0;
    scanf("%d ",&a);
    for(;;)
    {
        scanf("%d",&n);
        if(n>0)
        {
            break;
        }
    }
    for(i=1 ; i<=n ; i++)
    {
        k=k+a;
        a=a+1;
    }
    printf("%d\n",k);
    return 0;
}

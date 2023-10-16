//1151-Easy Fibonacci
#include<stdio.h>

int main()
{
    int i,a=0,b=1,f,n;
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++)
    {
        if(i==1)
        {
            printf("%d ",a);
        }
        else if(i==2)
        {
            printf("%d ",b);
        }
        else
        {
            f=a+b;
            a=b;
            b=f;
            if(i==n)
            {
                printf("%d",f);
            }
            else
            {
                printf("%d ",f);
            }
        }
    }
    printf("\n");
    return 0;
}

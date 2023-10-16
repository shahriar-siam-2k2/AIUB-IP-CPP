//1101-Sequence of Numbers and Sum
#include<stdio.h>

int main()
{
    int i,j,a,b,k;
    for(;;)//infinity loop
    {
        scanf("%d %d",&a,&b);
        if(a<=0 || b<=0)//value breaking
        {
            break;
        }
        if(a>b)//value swapping
        {
            a=a+b;
            b=a-b;
            a=a-b;
        }
        k=0;
        for(j=a ; j<=b ; j++)
        {
            printf("%d ",j);
            k+=j;
        }
        printf("Sum=%d\n",k);
    }
    return 0;
}

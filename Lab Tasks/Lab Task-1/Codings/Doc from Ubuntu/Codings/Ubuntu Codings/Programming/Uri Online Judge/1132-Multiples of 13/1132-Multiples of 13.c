//1132-Multiples of 13
#include<stdio.h>

int main()
{
    int x,y,i,k=0;
    scanf("%d %d",&x,&y);
    if(x>y)//ascending making
    {
        x=x+y;
        y=x-y;
        x=x-y;
    }
    for(i=x ; i<=y ; i++)
    {
        if(i%13!=0)
        {
            k+=i;
        }
    }
    printf("%d\n",k);
    return 0;
}

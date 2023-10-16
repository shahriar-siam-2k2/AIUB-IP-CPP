//1071-Sum of consecutive odd numbers 1
#include<stdio.h>

int main()
{
    int x,y,i,sum=0;
    scanf("%d %d",&x,&y);
    if(x > y)
    {
        x=x+y;

        y=x-y;
        x=x-y;
    }
    for(i = x+1; i < y; i++)
    {
        if (i%2!=0)
        {
            sum += i;
        }
    }
    printf("%d\n",sum);

    return 0;
}

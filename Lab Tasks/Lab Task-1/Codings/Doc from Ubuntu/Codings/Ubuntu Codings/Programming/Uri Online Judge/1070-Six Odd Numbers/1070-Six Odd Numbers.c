//1070-Six Odd Numbers
#include<stdio.h>

int main()
{
    int x,i;
    scanf("%d",&x);
    if(x%2==0)
    {
        x=x+1;
        for(i=x ; i<x+12; i=i+2)
        {
            printf("%d\n",i);
        }
    }
    else
    {
        for(i=x ; i<x+12 ; i=i+2)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}

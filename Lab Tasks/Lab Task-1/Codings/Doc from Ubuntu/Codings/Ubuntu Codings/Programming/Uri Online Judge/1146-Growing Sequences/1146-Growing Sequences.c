//1146-Growing Sequences
#include<stdio.h>

int main()
{
    int i,j,x;
    for(;;)
    {
        scanf("%d",&x);
        if(x==0)
        {
            break;
        }
        else
        {
            for(i=1 ; i<=x ; i++)
            {
                if(i==x)
                {
                    printf("%d\n",i);
                }
                else
                {
                    printf("%d ",i);
                }
            }
        }
    }
    return 0;
}

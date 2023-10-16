//1159-Sum of Consecutive Even Numbers
#include<stdio.h>

int main()
{
    int i,j,a=0,s,x;
    for(;;)
    {
        scanf("%d",&x);
        if(x==0)
        {
            break;
        }
        else
        {
            for(j=1 ; j<=10 ; j++)
            {
                if(x%2==0)
                {
                    s=x+a;
                    a=s;
                }
                x++;
            }
            printf("%d\n",s);
            a=0;
        }
    }
    return 0;
}

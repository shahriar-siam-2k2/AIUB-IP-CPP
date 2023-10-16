//1099-Sum of Consecutive Odd Numbers 2
#include<stdio.h>

int main()
{
    int i,j,k,x,y,n;
    scanf("%d",&n);
    for(i=0 ; i<n ; i++)
    {
        k=0;
        scanf("%d %d",&x,&y);
        if(x>y)
        {
            x=x+y;
            y=x-y;
            x=x-y;
        }
        for(j=x+1 ; j<y ; j++)
        {
            if(j%2!=0)
            {
                k+=j;
            }
        }
        printf("%d\n",k);
    }
    return 0;
}

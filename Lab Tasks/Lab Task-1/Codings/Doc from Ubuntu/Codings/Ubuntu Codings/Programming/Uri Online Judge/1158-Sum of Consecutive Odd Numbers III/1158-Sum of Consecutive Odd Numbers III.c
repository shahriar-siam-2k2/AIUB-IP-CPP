//1158-Sum of Consecutive Odd Numbers III
#include<stdio.h>

int main()
{
    int n,i,j,s,x,y,a=0;
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++)
    {
        scanf("%d %d",&x,&y);
        for(j=1 ; j<=(y*2) ; j++)
        {
            if(x%2!=0)
            {
                s=x+a;
                a=s;
            }
            x++;
        }
        printf("%d\n",s);
        a=0;
    }
    return 0;
}

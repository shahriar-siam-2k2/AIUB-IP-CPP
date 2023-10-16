//1080-Highest and Position
#include<stdio.h>

int main()
{
    int n,i,j=0,k;
    for(i=1 ; i<=100 ; i++)
    {
        scanf("%d",&n);
        if(n>j)
        {
            j=n;
            k=i;
        }
    }
    printf("%d\n%d\n",j,k);
    return 0;
}

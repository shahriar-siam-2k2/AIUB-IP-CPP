//1065-Even Between Five Numbers
#include<stdio.h>

int main()
{
    int n,m,i,j;
    j=0;
    for(i=0 ; i<5 ; i++)
    {
        scanf("%d",&n);
        m = n % 2;
        if(m==0)
        {
            j++;
        }
    }
    printf("%d valores pares\n",j);

    return 0;
}

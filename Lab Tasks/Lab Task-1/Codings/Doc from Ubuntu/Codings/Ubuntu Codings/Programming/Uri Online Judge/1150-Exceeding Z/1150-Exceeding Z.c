//1150-Exceeding Z
#include<stdio.h>

int main()
{
    int i,k=0,x,z;
    scanf("%d\n",&x);
    for(;;)
    {
        scanf("%d",&z);
        if(z>x)
        {
            break;
        }
    }
    for(i=1 ; ; i++)
    {
        k=k+x;
        x=x+1;
        if(k>=z)
        {
            break;
        }
    }
    printf("%d\n",i);
    return 0;
}

//1541-Building Houses
#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,L;
    double x;
    for(;;)
    {
        scanf("%d",&a);
        if(a==0)
        {
            break;
        }
        scanf(" %d %d",&b,&c);
        x = (a*b)*(100.0/c);
        L = sqrt(x);
        printf("%d\n",L);
    }
    return 0;
}

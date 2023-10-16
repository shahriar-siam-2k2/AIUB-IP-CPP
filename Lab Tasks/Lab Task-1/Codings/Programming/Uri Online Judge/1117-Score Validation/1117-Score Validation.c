//1117-Score Validation
#include<stdio.h>

int main()
{
    int j=1;
    double n,N[2],avg;
    for(;;)
    {
        scanf("%lf",&n);
        if(n>=0.0 && n<=10.0)
        {
            N[j]=n;
            j++;
        }
        else
        {
            printf("nota invalida\n");
        }
        if(j>=3)
        {
            break;
        }
    }
    avg=(N[1]+N[2])/2.0;
    printf("media = %0.2lf\n",avg);
    return 0;
}

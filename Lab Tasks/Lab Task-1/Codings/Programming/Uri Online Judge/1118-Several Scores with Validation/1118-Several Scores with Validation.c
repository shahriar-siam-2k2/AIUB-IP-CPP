//1118-Several Scores with Validation
#include<stdio.h>

int main()
{
    int j=1,x;
    double n,N[2],avg;
    for(;;)
    {
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

        j=1;
        for(;;)
        {
            scanf("%d",&x);
            printf("novo calculo (1-sim 2-nao)\n");
            if(x==1 || x==2)
            {
                break;
            }
        }
        if(x==1)
        {
            continue;
        }
        else
        {
            break;
        }
    }
    return 0;
}

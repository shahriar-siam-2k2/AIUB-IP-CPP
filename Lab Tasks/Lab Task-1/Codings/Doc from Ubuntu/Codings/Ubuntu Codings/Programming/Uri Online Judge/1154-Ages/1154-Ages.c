//1154-Ages
#include<stdio.h>

int main()
{
    int n;
    double avg,i,sum,a=0.0;
    for(i=0.0 ; ; i++)
    {
        scanf("%d",&n);
        if(n>=0.0)
        {
            sum=a+n;
            a=sum;
        }
        else
        {
            break;
        }
    }
    avg=sum/i;
    printf("%0.2lf\n",avg);
    return 0;
}

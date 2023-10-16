//1064-Positives and Average
#include<stdio.h>

int main()
{
    float m,n,avg;
    int i,j;
    for(i=0 ; i<6 ; i++)
    {
        scanf("%f",&n);
        if(n>=0)
        {
            m+=n;
            j++;
        }
    }
    avg = m / j;
    printf("%d valores positivos\n",j);
    printf("%0.1f\n",avg);
    return 0;
}

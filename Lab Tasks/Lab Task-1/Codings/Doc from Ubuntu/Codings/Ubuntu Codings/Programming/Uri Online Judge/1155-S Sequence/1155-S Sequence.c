//1155-S Sequence
#include<stdio.h>

int main()
{
    double i,s,a=0.0;
    for(i=1.0 ; i<=100.0 ; i++)
    {
        s=a+(1/i);
        a=s;
    }
    printf("%0.2lf\n",s);
    return 0;
}

//1156-S Sequence II
#include<stdio.h>
#include<math.h>

int main()
{
    double i,a=1.0,b,c=0.0,s;
    for(i=0.0 ; i<=19 ; i++)//39=a+(n+1)*d rule used and here n=20, for using loop from 0, so validation is 20-1=19
    {
        b=pow(2,i);
        s=(a/b)+c;
        a=a+2;
        c=s;
    }
    printf("%0.2lf\n",s);
    return 0;
}

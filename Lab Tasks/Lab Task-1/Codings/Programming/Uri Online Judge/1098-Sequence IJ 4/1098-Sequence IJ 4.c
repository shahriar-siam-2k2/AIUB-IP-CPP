//1098-Sequence IJ 4
#include<stdio.h>

int main()
{
    float i,k=1.0;
    int j,a,b;
    for(i=0.0 ; i<2.1 ; i+=0.2)
    {
        for(j=1 ; j<=3 ; j++)
        {
            if((i>0.0 && i<1.0) || (i>1.0 && i<2.0))
            {
                printf("I=%0.1f J=%0.1f\n",i,k);
                k++;
            }
            else
            {
                a=i;
                printf("I=%d J=%.f\n",a,k);
                k++;

            }
        }
        k-=2.8;

    }
    return 0;
}

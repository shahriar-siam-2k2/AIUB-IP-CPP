//1079-Weighted Averages
//MEDIA=(Grade_1*credit_1+grade_2*credit_2)/(Credit_1+Credit_2)
#include<stdio.h>

int main()
{
    int n,i;
    double a,b,c,med;
    scanf("%d",&n);
    for(i=0 ; i<n ; i++)
    {
        scanf("%lf %lf %lf",&a,&b,&c);
        med=(a*2+b*3+c*5)/(2+3+5);
        printf("%0.1lf\n",med);
    }
    return 0;
}

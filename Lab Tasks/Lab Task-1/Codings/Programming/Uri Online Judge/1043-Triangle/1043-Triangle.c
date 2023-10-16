//1043-Triangle
#include<stdio.h>

int main()
{
    float a,b,c,perimeter,area;
    scanf("%f %f %f",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b)
    {
        perimeter=(a+b+c);
        printf("Perimetro = %0.1f\n",perimeter);
    }
    else
    {
        area=(1.0/2)*(a+b)*c;
        printf("Area = %0.1f\n",area);
    }
    return 0;
}
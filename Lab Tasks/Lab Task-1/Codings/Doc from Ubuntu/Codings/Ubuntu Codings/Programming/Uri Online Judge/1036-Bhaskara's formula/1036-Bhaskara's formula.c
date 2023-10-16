//Read 3 floating-point numbers. After, print the roots of bhaskara’s formula. If it's impossible to calculate the roots because a division by zero or a square root of a negative number, presents the message “Impossivel calcular”.

//Input
//Read 3 floating-point numbers (double) A, B and C.

//Output
//Print the result with 5 digits after the decimal point or the message if it is impossible to calculate.
#include<stdio.h>
#include<math.h>

int main()
{
    double A,B,C,R1,R2;
    scanf("%lf %lf %lf",&A,&B,&C);
    R1=(-B+sqrt(pow(B,2)-4*A*C))/2*A;
    R2=(-B-sqrt(pow(B,2)-4*A*C))/2*A;
    if((pow(B,2)-4*A*C)>=0 && A!=0)
    {
        printf("R1 = %0.5lf\n",R1);
        printf("R2 = %0.5lf\n",R2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }
    return 0;
}

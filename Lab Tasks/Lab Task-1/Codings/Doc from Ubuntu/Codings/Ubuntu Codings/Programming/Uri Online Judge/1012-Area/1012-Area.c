//Make a program that reads three floating point values: A, B and C. Then, calculate and show:
//a) the area of the rectangled triangle that has base A and height C.
//b) the area of the radius's circle C. (pi = 3.14159)
//c) the area of the trapezium which has A and B by base, and C by height.
//d) the area of ​​the square that has side B.
//e) the area of the rectangle that has sides A and B.

//Input
//The input file contains three double values with one digit after the decimal point.

//Output
//The output file must contain 5 lines of data. Each line corresponds to one of the areas described above, always with a corresponding message (in Portuguese) and one space between the two points and the value. The value calculated must be presented with 3 digits after the decimal point.
#include<stdio.h>
#include<math.h>

int main()
{
    float A,B,C;
    double TRI,CIR,TRA,QAD,RET;
    const double pi=3.14159;
    scanf("%f %f %f",&A,&B,&C);
    TRI=0.5*A*C;
    CIR=pi*pow(C,2);
    TRA=0.5*(A+B)*C;
    QAD=pow(B,2);
    RET=A*B;
    printf("TRIANGULO: %0.3lf\n",TRI);
    printf("CIRCULO: %0.3lf\n",CIR);
    printf("TRAPEZIO: %0.3lf\n",TRA);
    printf("QUADRADO: %0.3lf\n",QAD);
    printf("RETANGULO: %0.3lf\n",RET);
    return 0;
}

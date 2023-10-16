//Read two floating points' values of double precision A and B, corresponding to two student's grades. After this, calculate the student's average, considering that grade A has weight 3.5 and B has weight 7.5. Each grade can be from zero to ten, always with one digit after the decimal point. Don’t forget to print the end of line after the result, otherwise you will receive “Presentation Error”. Don’t forget the space before and after the equal sign.

//Input
//The input file contains 2 floating points' values with one digit after the decimal point.

//Output
//Print the message "MEDIA"(average in Portuguese) and the student's average according to the following example, with 5 digits after the decimal point and with a blank space before and after the equal signal.
#include<stdio.h>
#include<math.h>

int main()
{
    double A,B,MEDIA;
    scanf("%lf %lf",&A,&B);
    MEDIA=(A*3.5+B*7.5)/(3.5+7.5);
    printf("MEDIA = %0.5lf\n",MEDIA);
    return 0;
}
//MEDIA=(Grade_1*credit_1+grade_2*credit_2)/(Credit_1+Credit_2)

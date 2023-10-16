//Read three values (variables A, B and C), which are the three student's grades. Then, calculate the average, considering that grade A has weight 2, grade B has weight 3 and the grade C has weight 5. Consider that each grade can go from 0 to 10.0, always with one decimal place.

//Input
//The input file contains 3 values of floating points with one digit after the decimal point.

//Output
//Print the message "MEDIA"(average in Portuguese) and the student's average according to the following example, with a blank space before and after the equal signal.
#include<stdio.h>
#include<math.h>

int main()
{
    float A,B,C,MEDIA;
    scanf("%f %f %f",&A,&B,&C);
    MEDIA=(A*2+B*3+C*5)/(2+3+5);
    printf("MEDIA = %0.1f\n",MEDIA);
    return 0;
}
//MEDIA=(Grade_1*credit_1+grade_2*credit_2)/(Credit_1+Credit_2)

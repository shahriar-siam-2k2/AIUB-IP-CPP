//In this problem, the task is to read a code of a product 1, the number of units of product 1, the price for one unit of product 1, the code of a product 2, the number of units of product 2 and the price for one unit of product 2. After this, calculate and show the amount to be paid.

//Input
//The input file contains two lines of data. In each line there will be 3 values: two integers and a floating value with 2 digits after the decimal point.

//Output
//The output file must be a message like the following example where "Valor a pagar" means Value to Pay. Remember the space after ":" and after "R$" symbol. The value must be presented with 2 digits after the point.
#include<stdio.h>
#include<math.h>

int main()
{
    int c1,n1,c2,n2;
    float p1,p2,TOTAL;
    scanf("%d %d %f",&c1,&n1,&p1);
    scanf("%d %d %f",&c2,&n2,&p2);
    TOTAL=(n1*p1)+(n2*p2);
    printf("VALOR A PAGAR: R$ %0.2f\n",TOTAL);
    return 0;
}

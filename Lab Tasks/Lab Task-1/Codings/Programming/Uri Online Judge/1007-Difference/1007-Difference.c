//Read four integer values named A, B, C and D. Calculate and print the difference of product A and B by the product of C and D (A * B - C * D).

//Input
//The input file contains 4 integer values.

//Output
//Print DIFERENCA (DIFFERENCE in Portuguese) with all the capital letters, according to the following example, with a blank space before and after the equal signal.
#include<stdio.h>
#include<math.h>

int main()
{
    int A,B,C,D,DIFERENCA;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    DIFERENCA=(A*B-C*D);
    printf("DIFERENCA = %d\n",DIFERENCA);
    return 0;
}

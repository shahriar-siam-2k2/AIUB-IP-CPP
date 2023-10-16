//Read a value of floating point with two decimal places. This represents a monetary value. After this, calculate the smallest possible number of notes and coins on which the value can be decomposed. The considered notes are of 100, 50, 20, 10, 5, 2. The possible coins are of 1, 0.50, 0.25, 0.10, 0.05 and 0.01. Print the message “NOTAS:” followed by the list of notes and the message “MOEDAS:” followed by the list of coins.

//Input
//The input file contains a value of floating point N (0 ≤ N ≤ 1000000.00).

//Output
//Print the minimum quantity of banknotes and coins necessary to change the initial value, as the given example.
#include<stdio.h>

int main()
{
    double N;
    int easy,A,B,C,D,E,F,a,b,c,d,e,f,R;
    scanf("%lf",&N);
    easy=N*100;

    A=easy/10000;
    R=easy%10000;
    B=R/5000;
    R=R%5000;
    C=R/2000;
    R=R%2000;
    D=R/1000;
    R=R%1000;
    E=R/500;
    R=R%500;
    F=R/200;
    R=R%200;

    a=R/100;
    R=R%100;
    b=R/50;
    R=R%50;
    c=R/25;
    R=R%25;
    d=R/10;
    R=R%10;
    e=R/5;
    R=R%5;
    f=R/1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",A);
    printf("%d nota(s) de R$ 50.00\n",B);
    printf("%d nota(s) de R$ 20.00\n",C);
    printf("%d nota(s) de R$ 10.00\n",D);
    printf("%d nota(s) de R$ 5.00\n",E);
    printf("%d nota(s) de R$ 2.00\n",F);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",a);
    printf("%d moeda(s) de R$ 0.50\n",b);
    printf("%d moeda(s) de R$ 0.25\n",c);
    printf("%d moeda(s) de R$ 0.10\n",d);
    printf("%d moeda(s) de R$ 0.05\n",e);
    printf("%d moeda(s) de R$ 0.01\n",f);

    return 0;
}
//N*100 & all note(s) and coin(s) values has been multiplied by 100 for easier calculation.
//R means ভাগশেষ.

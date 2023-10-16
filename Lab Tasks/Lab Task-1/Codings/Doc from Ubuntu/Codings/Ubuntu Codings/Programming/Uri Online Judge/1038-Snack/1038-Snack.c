//Using the following table, write a program that reads a code and the amount of an item. After, print the value to pay. This is a very simple program with the only intention of practice of selection commands.

//https://resources.urionlinejudge.com.br/gallery/images/problems/UOJ_1038_en.png


//Input
//The input file contains two integer numbers X and Y. X is the product code and Y is the quantity of this item according to the above table.

//Output
//The output must be a message "Total: R$ " followed by the total value to be paid, with 2 digits after the decimal point.
#include<stdio.h>

int main()
{
    int X,Y;
    float Z,total;
    scanf("%d %d",&X,&Y);
    if(X==1)
    {
        Z=4.00;
        total=Z*Y;
        printf("Total: R$ %0.2f\n",total);
    }
    else if(X==2)
    {
        Z=4.50;
        total=Z*Y;
        printf("Total: R$ %0.2f\n",total);
    }
    else if(X==3)
    {
        Z=5.00;
        total=Z*Y;
        printf("Total: R$ %0.2f\n",total);
    }
    else if(X==4)
    {
        Z=2.00;
        total=Z*Y;
        printf("Total: R$ %0.2f\n",total);
    }
    else if(X==5)
    {
        Z=1.50;
        total=Z*Y;
        printf("Total: R$ %0.2f\n",total);
    }
    return 0;
}

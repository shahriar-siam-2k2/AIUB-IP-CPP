//Make a program that reads 3 integer values and present the greatest one followed by the message "eh o maior". Use the following formula:

//MaiorAB=(a+b+abs(a-b))/2

//Input
//The input file contains 3 integer values.

//Output
//Print the greatest of these three values followed by a space and the message “eh o maior”.
#include<stdio.h>

int main()
{
    int a,b,c,m;
    scanf("%d %d %d",&a,&b,&c);
    m=(a+b+abs(a-b))/2;
    m=(m+c+abs(m-c))/2;
    printf("%d eh o maior\n",m);
    return 0;
}
//first m e a & b er sathe compare kore j man boro pabe seta m e rakhbe, sei m second e c er sathe compare kore bigger number ber korbe.
//ekhane abs->absolute function

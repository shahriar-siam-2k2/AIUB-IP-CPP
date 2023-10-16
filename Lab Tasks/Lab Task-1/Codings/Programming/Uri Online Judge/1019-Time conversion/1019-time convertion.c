//Read an integer value, which is the duration in seconds of a certain event in a factory, and inform it expressed in hours:minutes:seconds.

//Input
//The input file contains an integer N.

//Output
//Print the read time in the input file (seconds) converted in hours:minutes:seconds like the following example.
#include<stdio.h>
#include<math.h>

int main()
{
    int N,H,h,M,S;
    scanf("%d",&N);
    H=N/3600;
    h=N%3600;
    M=h/60;
    S=h%60;
    printf("%d:%d:%d\n",H,M,S);
    return 0;
}

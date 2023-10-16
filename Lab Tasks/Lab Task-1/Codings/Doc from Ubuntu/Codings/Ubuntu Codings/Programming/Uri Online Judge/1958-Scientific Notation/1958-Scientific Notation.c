//1958-Scientific Notation
#include<stdio.h>
#include<math.h>

int main()
{
    double n;
    scanf("%lf",&n);
    if(n>0)
    {
        printf("+%.4E\n",n);
    }
    else
    {
        printf("%.4E\n",n);
    }
    return 0;
}

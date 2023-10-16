//1866-Bill
#include<stdio.h>

int main()
{
    int c,i,a;
    scanf("%d",&c);
    for(i=0 ; i<c ; i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            printf("0\n");
        }
        else
        {
            printf("1\n");
        }
    }
    return 0;
}

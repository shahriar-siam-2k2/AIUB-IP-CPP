//1759-Ho Ho Ho
#include<stdio.h>

int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1 ; i<=t ; i++)
    {
        if(i==t)
        {
            printf("Ho!\n");
        }
        else
        {
            printf("Ho ");
        }
    }
    return 0;
}

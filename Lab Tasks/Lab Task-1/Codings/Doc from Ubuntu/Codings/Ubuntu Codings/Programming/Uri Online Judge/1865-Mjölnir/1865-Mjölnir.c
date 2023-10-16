//1865-Mjölnir
#include<stdio.h>
#include<string.h>

int main()
{
    int n,t,i;
    char C[100];
    scanf("%d",&n);
    for(i=0 ; i<n ; i++)
    {
        scanf("%s %d",&C,&t);
        if(strcmp(C,"Thor")==0)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
    return 0;
}

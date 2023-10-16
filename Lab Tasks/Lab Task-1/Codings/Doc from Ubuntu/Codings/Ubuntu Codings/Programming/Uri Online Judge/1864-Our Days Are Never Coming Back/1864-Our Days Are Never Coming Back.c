//1864-Our Days Are Never Coming Back
#include<stdio.h>
#include<string.h>

int main()
{
    int n,i;
    char C[40];
    strcpy(C,"LIFE IS NOT A PROBLEM TO BE SOLVED");
    scanf("%d",&n);
    for(i=0 ; i<n ; i++)
    {
        printf("%c",C[i]);
    }
    printf("\n");
    return 0;
}

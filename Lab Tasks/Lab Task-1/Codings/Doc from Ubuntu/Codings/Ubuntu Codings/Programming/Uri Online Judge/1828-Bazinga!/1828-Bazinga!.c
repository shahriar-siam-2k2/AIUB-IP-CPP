//1828-Bazinga!
#include<stdio.h>
#include<string.h>

int main()
{
    char A[20],B[20];
    int t,i;
    scanf("%d",&t);
    for(i=1 ; i<=t ; i++)
    {
        scanf("%s %s",&A,&B);
        if(strcmp(A,B)==0)
        {
            printf("Caso #%d: De novo!\n",i);
        }
        else if(strcmp("tesoura",A)==0)
        {
            if(strcmp("papel",B)==0 || strcmp("lagarto",B)==0)
            {
                printf("Caso #%d: Bazinga!\n",i);
            }
            else if(strcmp("Spock",B)==0 || strcmp("pedra",B)==0)
            {
                printf("Caso #%d: Raj trapaceou!\n",i);
            }
        }
        else if(strcmp("papel",A)==0)
        {
            if(strcmp("pedra",B)==0 || strcmp("Spock",B)==0)
            {
                printf("Caso #%d: Bazinga!\n",i);
            }
            else if(strcmp("tesoura",B)==0 || strcmp("lagarto",B)==0)
            {
                printf("Caso #%d: Raj trapaceou!\n",i);
            }
        }
        else if(strcmp("pedra",A)==0)
        {
            if(strcmp("lagarto",B)==0 || strcmp("tesoura",B)==0)
            {
                printf("Caso #%d: Bazinga!\n",i);
            }
            else if(strcmp("papel",B)==0 || strcmp("Spock",B)==0)
            {
                printf("Caso #%d: Raj trapaceou!\n",i);
            }
        }
        else if(strcmp("lagarto",A)==0)
        {
            if(strcmp("Spock",B)==0 || strcmp("papel",B)==0)
            {
                printf("Caso #%d: Bazinga!\n",i);
            }
            else if(strcmp("pedra",B)==0 || strcmp("tesoura",B)==0)
            {
                printf("Caso #%d: Raj trapaceou!\n",i);
            }
        }
        else if(strcmp("Spock",A)==0)
        {
            if(strcmp("tesoura",B)==0 || strcmp("pedra",B)==0)
            {
                printf("Caso #%d: Bazinga!\n",i);
            }
            else if(strcmp("lagarto",B)==0 || strcmp("papel",B)==0)
            {
                printf("Caso #%d: Raj trapaceou!\n",i);
            }
        }
    }
    return 0;
}

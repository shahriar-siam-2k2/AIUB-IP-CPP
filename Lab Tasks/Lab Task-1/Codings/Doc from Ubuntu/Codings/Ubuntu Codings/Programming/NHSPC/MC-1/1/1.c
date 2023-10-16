#include<stdio.h>
#include<string.h>

int main()
{
    int T,i,j;
    char S[15];

    scanf("%d", &T);
    for(i=1 ; i<=T ; i++)
    {
        scanf("%s", S);
        for(j=0 ; j<15 ; j++)
        {
            if(S[j] == 'a' || S[j] == 'e' ||  
               S[j] == 'i' || S[j] == 'o' || S[j] == 'u')
            {
                printf("Yes\n");
                break;
            }
            else if(j==14)
            {
                printf("No\n");
            }
        }
    }
}
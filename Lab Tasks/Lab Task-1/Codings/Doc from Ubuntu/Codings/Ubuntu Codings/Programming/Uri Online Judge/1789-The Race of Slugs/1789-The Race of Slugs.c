//1789-The Race of Slugs
#include<stdio.h>

int main()
{
    int L,i,j,big,s;
    while(scanf("%d",&L)==1)
    {
        int V[L+5];
        for(i=0 ; i<L ; i++)//scanning
        {
            scanf("%d",&V[i]);
        }
        s = V[0];
        for(i=1 ; i<L ; i++)//checking bigger value
        {
            if(s > V[i])
            {
                big = s;
                s   = big;
            }
            else
            {
                big = V[i];
                s   = big;
            }
        }
        if(big < 10)
        {
            printf("1\n");
        }
        else if(big>=10 && big<20)
        {
            printf("2\n");
        }
        else if(big >= 20)
        {
            printf("3\n");
        }
    }
    return 0;
}

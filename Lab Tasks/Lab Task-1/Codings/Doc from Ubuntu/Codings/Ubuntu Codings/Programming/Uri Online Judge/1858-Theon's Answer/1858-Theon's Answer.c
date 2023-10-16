//1858-Theon's Answer
#include<stdio.h>

int main()
{
    int n,i,a,c=0,d=0;
    scanf("%d",&n);
    int T[n+5];
    for(i=1 ; i<=n ; i++)
    {
        scanf("%d",&T[i]);
    }
    for(i=1 ; i<=n ; i++)
    {
        if(T[i]==0)
        {
            c=i;
            break;
        }
    }
    if(c!=0 && n!=1)
    {
        printf("%d\n",c);
    }
    else if(n==1)
    {
        printf("1\n");
    }
    else
    {
        for(i=1 ; i<n ; i++)
        {
            if(T[i]==T[i+1])
            {
                if(T[i]==d)
                {
                    continue;
                }
                else
                {
                    c = i;
                    d = T[i];
                }
            }
            else if(T[i] < T[i+1])
            {
                if(T[i]==d)
                {
                    continue;
                }
                else
                {
                    c = i;
                    d = T[i];
                }
            }
            else if(T[i] > T[i+1])
            {
                if(T[i+1]==d)
                {
                    continue;
                }
                else
                {
                    c = i+1;
                    d = T[i+1];
                }
            }
        }
        printf("%d\n",c);
    }
    return 0;
}

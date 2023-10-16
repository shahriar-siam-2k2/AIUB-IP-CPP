//1435-Square Matrix I
#include<stdio.h>

int main()
{
    int i,j,r,c,n,a,b,l,hn,N[105][105];
    for(;;)
    {
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        else
        {
            if(n%2==0)
            {
                hn = n/2;
            }
            else
            {
                hn = (n/2)+1;
            }
            a=0, b=n-1;
            for(l=1 ; l<=hn ; l++)//matrix saving on array
            {
                for(r=a ; r<=b ; r++)
                {
                    for(c=a ; c<=b ; c++)
                    {
                        N[r][c]=l;
                    }
                }
                a++, b--;
            }
        }
        for(i=0 ; i<n ; i++)//printing
        {
            for(j=0 ; j<n ; j++)
            {
                if(j==0)
                {
                    printf("%3d",N[i][j]);
                }
                else
                {
                    printf("%4d",N[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}


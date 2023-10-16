//1478-Square Matrix II
#include<stdio.h>

int main()
{
    int ri,ci,n,l,r,c,a,b,a1,b1,x,N[105][105];
    for(;;)
    {
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        else
        {
            a1=0, b1=n;
            for(l=1 ; l<=n ; l++)
            {
                a=a1, b=b1, x=1;
                for(r=a ; r<a+1 ; r++)//row fixed
                {
                    for(c=a ; c<b ; c++)
                    {
                        N[r][c]=x;
                        x++;
                    }
                }
                a=a1, b=b1, x=1;
                for(c=a ; c<a+1 ; c++)//column fixed
                {
                    for(r=a ; r<b ; r++)
                    {
                        N[r][c]=x;
                        x++;
                    }
                }
                a1++;
            }
        }
        for(ri=0 ; ri<n ; ri++)//printing
        {
            for(ci=0 ; ci<n ; ci++)
            {
                if(ci==0)
                {
                    printf("%3d",N[ri][ci]);
                }
                else
                {
                    printf("%4d",N[ri][ci]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

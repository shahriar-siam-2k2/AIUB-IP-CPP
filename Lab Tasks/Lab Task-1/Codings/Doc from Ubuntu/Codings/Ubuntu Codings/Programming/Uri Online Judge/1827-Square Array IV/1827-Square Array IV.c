//1827-Square Array IV
#include<stdio.h>
#include<math.h>

int main()
{
    int N,tn,n1,n2,l,i,c,r,a1,b1,A[105][105],x,y,a,b;
    while(scanf("%d",&N)==1)
    {
        n1 = (N/3);
        a=0, b=0, tn=N;
        x=2,y=3;
        for(l=0 ; l<n1 ; l++)//Value Saving for layer 203
        {
            a1=a, b1=b;
            for(i=1 ; i<=2 ; i++)
            {
                for(c=a1 ; c<a1+1 ; c++)//column fixing
                {
                    for(r=b1 ; r<N ; r++)
                    {
                        if(r==b1)
                        {
                            A[r][c] = x;
                        }
                        else if(r==(N-1))
                        {
                            A[r][c] = y;
                        }
                        else
                        {
                            A[r][c] = 0;
                        }
                    }
                }
                for(r=a1 ; r<a1+1 ; r++)//row fixing
                {
                    for(c=b1 ; c<N ; c++)
                    {
                        if(c==b1)
                        {
                            A[r][c] = x;
                        }
                        else if(c==(N-1))
                        {
                            A[r][c] = y;
                        }
                        else
                        {
                            A[r][c] = 0;
                        }
                    }
                }
                x=3; y=2; a1=N-1;
            }
            a++; b++; N--; x=2; y=3;
        }
        a1=n1, b1=n1;
        n2=tn-n1;
        for(l=0 ; l<n1 ; l++)//value saving for layer 1
        {
            for(i=1 ; i<=2 ; i++)
            {
                for(c=a1 ; c<a1+1 ; c++)//column fixed
                {
                    for(r=b1 ; r<n2 ; r++)
                    {
                        A[r][c] = 1;
                    }
                }
                for(r=a1 ; r<a1+1 ; r++)//row fixed
                {
                    for(c=b1 ; c<n2 ;c++)
                    {
                        A[r][c] = 1;
                    }
                }
                a1=n2-1;
            }
            a1=n1+1; b=n1+1; n2--;
        }
        i = tn/2;
        A[i][i] = 4;
        for(r=0 ; r<tn ; r++)//printing values
        {
            for(c=0 ; c<tn ; c++)
            {
                printf("%d",A[r][c]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

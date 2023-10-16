//1557-Square Matrix III
#include<stdio.h>
#include<math.h>

int main()
{
    int N[20][20],a1,b1,a2,b2,n,l,r,c,x,p1,p,ri,ci,t,L,digit,j;
    for(;;)
    {
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        a1=0, b1=0, p1=0;
        for(l=1 ; l<=n ; l++)
        {
            for(r=a1 ; r<a1+1 ; r++)//row fixing
            {
                p=p1;
                for(c=b1 ; c<n ; c++)
                {
                    x = pow(2,p);
                    N[r][c] = x;
                    p++;
                }
            }
            a2=a1, b2=b1; p=p1;
            for(c=a2 ; c<a2+1 ; c++)//column fixing
            {
                for(r=b2 ; r<n ; r++)
                {
                    x = pow(2,p);
                    N[r][c] = x;
                    p++;
                }
            }
            a1++, b1++, p1=p1+2;
        }
        for(ri=0 ; ri<n ; ri++)//checking Larger value = L
        {
            for(ci=0 ; ci<n ; ci++)
            {
                if(ci==0 && ri==0)
                {
                    if(N[0][1] > N[0][0])
                    {
                        L = N[0][1];
                    }
                    else
                    {
                        L = N[0][0];
                    }
                }
                else
                {
                    if(N[ri][ci] > L)
                    {
                        L = N[ri][ci];
                    }
                    else
                    {
                        L = L;
                    }
                }
            }
        }
        t=0;
        for(;;)//checking larger value's Digit = t
        {
            digit = L / 10.0;
            L = digit;
            t++;
            if(digit==0)
            {
                break;
            }
        }
        for(ri=0 ; ri<n ; ri++)//printing
        {
            for(ci=0 ; ci<n ; ci++)
            {
                if(n==1)
                {
                    printf("%d",N[ri][ci]);
                }
                else if(n==2)
                {
                    if(ci==0)
                    {
                        printf("%d ",N[ri][ci]);
                    }
                    else
                    {
                        printf("%d",N[ri][ci]);
                    }
                }
                else
                {
                    if(t==2)
                    {
                        if(ci==0)
                        {
                            printf("%2d",N[ri][ci]);
                        }
                        else
                        {
                            printf(" %2d",N[ri][ci]);
                        }
                    }
                    else if(t==3)
                    {
                        if(ci==0)
                        {
                            printf(" %2d",N[ri][ci]);
                        }
                        else
                        {
                            printf(" %3d",N[ri][ci]);
                        }
                    }
                    else if(t==4)
                    {
                        if(ci==0)
                        {
                            printf(" %3d",N[ri][ci]);
                        }
                        else
                        {
                            printf(" %4d",N[ri][ci]);
                        }
                    }
                    else if(t==5)
                    {
                        if(ci==0)
                        {
                            printf(" %4d",N[ri][ci]);
                        }
                        else
                        {
                            printf(" %5d",N[ri][ci]);
                        }
                    }
                    else if(t==6)
                    {
                        if(ci==0)
                        {
                            printf("  %4d",N[ri][ci]);
                        }
                        else
                        {
                            printf(" %6d",N[ri][ci]);
                        }
                    }
                    else if(t==7)
                    {
                        if(ci==0)
                        {
                            printf("   %4d",N[ri][ci]);
                        }
                        else
                        {
                            printf(" %7d",N[ri][ci]);
                        }
                    }
                    else if(t==8)
                    {
                        if(ci==0)
                        {
                            printf("    %4d",N[ri][ci]);
                        }
                        else
                        {
                            printf(" %8d",N[ri][ci]);
                        }
                    }
                    else if(t==9)
                    {
                        if(ci==0)
                        {
                            printf("    %5d",N[ri][ci]);
                        }
                        else
                        {
                            printf(" %9d",N[ri][ci]);
                        }
                    }
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}


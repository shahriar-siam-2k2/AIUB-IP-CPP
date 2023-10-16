//1145-Logical Sequence 2
#include<stdio.h>

int main()
{
    int i,j,l,k,n,a,m=1;
    scanf("%d %d",&a,&n);
    if(a>n)
    {
        a=a+n; n=a-n; a=a-n;
    }
    k=n/a;
    l=a;
    for(i=1 ; i<=k ; i++)
    {
        printf("%d",m);
        for(j=m+1 ; j<=l ; j++)
        {
            printf(" %d",j);
        }
        printf("\n");
        m=m+a;
        l=l+a;
    }
    return 0;
}

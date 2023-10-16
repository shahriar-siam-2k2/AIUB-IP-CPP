//1179-Array Fill IV
#include<stdio.h>

int main()
{
    int a=0,b=0,x,i,j,k,par[5],impar[5];
    for(i=1 ; i<=15 ; i++)
    {
        scanf("%d",&x);
        if(x%2==0)
        {
            par[a]=x;
            a++;
            if(a==5)
            {
                for(j=0 ; j<5 ; j++)
                {
                    printf("par[%d] = %d\n",j,par[j]);
                    a=0;
                }
            }
        }
        else
        {
            impar[b]=x;
            b++;
            if(b==5)
            {
                for(j=0 ; j<5 ; j++)
                {
                    printf("impar[%d] = %d\n",j,impar[j]);
                    b=0;
                }
            }
        }
    }
    for(k=0 ; k<b ; k++)
    {
        printf("impar[%d] = %d\n",k,impar[k]);
    }
    for(k=0 ; k<a ; k++)
    {
        printf("par[%d] = %d\n",k,par[k]);
    }
    return 0;
}

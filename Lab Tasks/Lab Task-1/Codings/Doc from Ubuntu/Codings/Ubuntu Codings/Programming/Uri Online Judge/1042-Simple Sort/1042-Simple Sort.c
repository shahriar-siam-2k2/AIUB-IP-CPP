#include<stdio.h>

int main()
{
    int a,b,c,x,y,min,mid,max;
    scanf("%d %d %d",&a,&b,&c);

    if(a<b)
    {
        x=a;
        y=b;
    }
    else
    {
        x=b;
        y=a;
    }
    
    if(c<=x)
    {
        min=c;
        mid=x;
        max=y;
    }
    else if(c>=y)
    {
        min=x;
        mid=y;
        max=c;
    }
    else
    {
        min=x;
        mid=c;
        max=y;
    }
    
    printf("%d\n",min);
    printf("%d\n",mid);
    printf("%d\n\n",max);
    
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    
    return 0;
}

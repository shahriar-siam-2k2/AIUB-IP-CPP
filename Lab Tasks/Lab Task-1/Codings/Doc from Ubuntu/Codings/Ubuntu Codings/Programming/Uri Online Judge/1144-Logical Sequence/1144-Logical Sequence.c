//1144-Logical Sequence
#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,x,a,b,c;
    scanf("%d",&n);
    for(i=1 ; i<=(n) ; i++)
    {
        x=0;
        x+=i;
        a=pow(x,1);
        b=pow(x,2);
        c=pow(x,3);
        printf("%d %d %d\n",a,b,c);
        b=b+1;
        c=c+1;
        printf("%d %d %d\n",a,b,c);
    }
    return 0;
}

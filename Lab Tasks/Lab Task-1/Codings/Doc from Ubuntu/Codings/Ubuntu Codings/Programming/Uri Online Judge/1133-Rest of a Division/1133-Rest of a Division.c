//1133-Rest of a Division
#include<stdio.h>

int main()
{
    int x,y,i;
    scanf("%d\n%d",&x,&y);
    if(x>y)//ascending making
    {
        x=x+y;
        y=x-y;
        x=x-y;
    }
    for(i=x+1 ; i<y ; i++)
    {
        if(i%5==2 || i%5==3)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}

//1072-Interval 2
#include<stdio.h>

int main()
{
    int n,a,x=0,y=0,i;
    scanf("%d",&n);
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&a);
        if(10<=a && a<=20)
        {
            x++;
        }
        else
        {
            y++;
        }
    }
    printf("%d in\n",x);
    printf("%d out\n",y);
    return 0;
}

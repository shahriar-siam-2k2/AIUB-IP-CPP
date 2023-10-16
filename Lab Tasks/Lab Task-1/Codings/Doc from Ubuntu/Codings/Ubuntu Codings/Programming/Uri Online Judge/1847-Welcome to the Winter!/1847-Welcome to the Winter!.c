//1847-Welcome to the Winter!
#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && b<=c)//1
    {
        printf(":)\n");
    }
    else if(a<b && b>=c)//2
    {
        printf(":(\n");
    }
    else if(a<b && b<c && abs(b-c) < abs(a-b))//3
    {
        printf(":(\n");
    }
    else if(a<b && b<c && abs(b-c) > abs(a-b))//4
    {
        printf(":)\n");
    }
    else if(a>b && b>c && abs(b-c) < abs(a-b))//5
    {
        printf(":)\n");
    }
    else if(a>b && b>c && abs(b-c) > abs(a-b))//6
    {
         printf(":(\n");
    }
    else if(a==b && b<c)//7
    {
        printf(":)\n");
    }
    else if(a==b && b>c)//8
    {
        printf(":(\n");
    }
    else if(a>b && b>=c)//9
    {
        printf(":(\n");
    }
    else if(a>b && b==c)//10
    {
        printf(":)\n");
    }
    else if(a<b && b<=c)//11
    {
        printf(":)\n");
    }
    else if(a==b && b==c)//12
    {
        printf(":(\n");
    }
    return 0;
}

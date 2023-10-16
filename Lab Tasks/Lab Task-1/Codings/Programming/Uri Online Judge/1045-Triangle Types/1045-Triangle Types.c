//1045-Triangle Types
#include<stdio.h>
#include<math.h>

int main()
{
    double e,f,g,x,y,min,mid,max,a,b,c;
    scanf("%lf %lf %lf",&e,&f,&g);
    
    //sorting to Descending
    if(e>f)
    {
        x=e;
        y=f;
    }
    else
    {
        x=f;
        y=e;
    }
    
    if(g>=x)
    {
        max=g;
        mid=x;
        min=y;
    }
    else if(y>=g)
    {
        max=x;
        mid=y;
        min=g;
    }
    else
    {
        max=x;
        mid=g;
        min=y;
    }
    
    a=max;
    b=mid;
    c=min;
    
    if(a>=b+c)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if(pow(a,2)==(pow(b,2)+pow(c,2)))
    {
        printf("TRIANGULO RETANGULO\n");
        if(a==b && b==c && c==a)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if(a==b || b==c || c==a)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    else if(pow(a,2)>(pow(b,2)+pow(c,2)))
    {
        printf("TRIANGULO OBTUSANGULO\n");
        if(a==b && b==c && c==a)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if(a==b || b==c || c==a)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    else if(pow(a,2)<(pow(b,2)+pow(c,2)))
    {
        printf("TRIANGULO ACUTANGULO\n");
        if(a==b && b==c && c==a)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if(a==b || b==c || c==a)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    
    return 0;
}
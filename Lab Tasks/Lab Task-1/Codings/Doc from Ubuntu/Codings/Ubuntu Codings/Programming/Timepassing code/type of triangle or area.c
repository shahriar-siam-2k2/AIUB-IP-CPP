#include<stdio.h>
#include<math.h>

int main()
{
    //values

    char v;
    float a,b,c;

    //introductions

    printf("<DETAILS OF TRIANGLE>\n\n");

    printf("<If you want to know 'The Type Of The Triangle' Enter 'T'>\n");
    printf("<If you want to know 'The Area Of The Triangle' Enter 'A'>\n");
    printf("\n");

    printf("What do you want to know?=");
    scanf("%c",&v);
    printf("\n");

    printf("Enter first side of triangle=");
    scanf("%f",&a);
    printf("Enter second side of triangle=");
    scanf("%f",&b);
    printf("Enter third side of triangle=");
    scanf("%f",&c);
    printf("\n");

    if(v=='T' && a>0 && b>0 && c>0)
    {
        if(a+b>c && b+c>a && c+a>b && a==b && b==c && c==a)
        {
           printf("Your triangle is a Equilateral Triangle.");
        }
        else if(a+b>c && b+c>a && c+a>b && a==b || b==c || c==a)
        {
            printf("Your triangle is Isosceles Triangle.");
        }
        else if(a+b>c && b+c>a && c+a>b && a!=b!=c)
        {
            printf("Your triangle is Asymmetric Triangle.");
        }
        else
        {
            printf("<ERROR>\n");
            printf("<Your triangle is INVALID>\n\n");
            printf("<WARNING>\n");
            printf("<Negative values should be avoided as a,b,c>\n");
        }
    }
    else if(v=='A' && a+b>c && b+c>a && c+a>b && a>0 && b>0 && c>0)
    {
        float s=(a+b+c)/2;
        float area=sqrt(s*(s-a)*(s-b)*(s-c));

        printf("The Area Of The Triangle=%f sq.unit.\n",area);
    }
    else if(a<0 || b<0 || c<0)
    {
        printf("<WARNING>\n");
        printf("<Negative values should be avoided as a,b,c>\n");
    }
    else
    {
        printf("<ERROR>\n");
        printf("<You have to enter character value as 'T' or 'A'>\n\n");
    }
    return 0;
}


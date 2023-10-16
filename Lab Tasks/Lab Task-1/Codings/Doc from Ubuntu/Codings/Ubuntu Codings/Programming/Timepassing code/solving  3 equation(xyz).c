#include<stdio.h>
#include<math.h>

int main()
{
    //values
    float a1,a2,a3,b1,b2,b3,c1,c2,c3,d1,d2,d3;

    //intro
    printf("<EQUATION SOLVER>\n\n");
    printf("a1x+b1y+c1z=d1\n");
    printf("a2x+b2y+c2z=d2\n");
    printf("a3x+b3y+c3z=d3\n");
    printf("--------------------------------\n");

    //input
    //1
    printf("Enter a1=");
    scanf("%f",&a1);
    printf("Enter b1=");
    scanf("%f",&b1);
    printf("Enter c1=");
    scanf("%f",&c1);
    printf("Enter d1=");
    scanf("%f",&d1);
    //2
    printf("\n");
    printf("Enter a2=");
    scanf("%f",&a2);
    printf("Enter b2=");
    scanf("%f",&b2);
    printf("Enter c2=");
    scanf("%f",&c2);
    printf("Enter d2=");
    scanf("%f",&d2);
    //3
    printf("\n");
    printf("Enter a3=");
    scanf("%f",&a3);
    printf("Enter b3=");
    scanf("%f",&b3);
    printf("Enter c3=");
    scanf("%f",&c3);
    printf("Enter d3=");
    scanf("%f",&d3);

    //calculation
    float d=a1*(b2*c3-c2*b3)-b1*(a2*c3-c2*a3)+c1*(a2*b3-b2*a3);
    float dx=d1*(b2*c3-c2*b3)-b1*(d2*c3-c2*d3)+c1*(d2*b3-b2*d3);
    float dy=a1*(d2*c3-c2*d3)-d1*(a2*c3-c2*a3)+c1*(a2*d3-d2*a3);
    float dz=a1*(b2*d3-d2*b3)-b1*(a2*d3-d2*a3)+d1*(a2*b3-b2*a3);

    float x=dx/d;
    float y=dy/d;
    float z=dz/d;

    //printing results
    if(d!=0)
    {
        printf("\n");
        printf("x=%f\n",x);
        printf("y=%f\n",y);
        printf("z=%f",z);
        printf("\n");
    }
    else
    {
        printf("\n");
        printf("<MATH ERROR>");
        printf("\n");
    }

    return 0;
}

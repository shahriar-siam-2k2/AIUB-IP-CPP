//1048-Salary Increase
#include<stdio.h>
#include<math.h>

int main()
{
    double sal,nsal,add,per;
    scanf("%lf",&sal);
    if(0<=sal && sal<=400.00)//15%
    {
        per=15.00;
        nsal=sal+(sal*(per/100.00));
        add=sal*(per/100.00);
        printf("Novo salario: %0.2lf\n",nsal);
        printf("Reajuste ganho: %0.2lf\n",add);
        printf("Em percentual: %0.0lf %\n",per);    
    }
    else if(400.01<=sal && sal<=800.00)//12%
    {
       per=12.00;
        nsal=sal+(sal*(per/100.00));
        add=sal*(per/100.00);
        printf("Novo salario: %0.2lf\n",nsal);
        printf("Reajuste ganho: %0.2lf\n",add);
        printf("Em percentual: %0.0lf %\n",per);    
    }
    else if(800.00<=sal && sal<=1200.00)//10%
    {
        per=10.00;
        nsal=sal+(sal*(per/100.00));
        add=sal*(per/100.00);
        printf("Novo salario: %0.2lf\n",nsal);
        printf("Reajuste ganho: %0.2lf\n",add);
        printf("Em percentual: %0.0lf %\n",per);
    }
    else if(1200.01<=sal && sal<=2000.00)//7%
    {
        per=7.00;
        nsal=sal+(sal*(per/100.00));
        add=sal*(per/100.00);
        printf("Novo salario: %0.2lf\n",nsal);
        printf("Reajuste ganho: %0.2lf\n",add);
        printf("Em percentual: %0.0lf %\n",per);
    }
    else if(2000.00<sal)//4%
    {
        per=4.00;
        nsal=sal+(sal*(per/100.00));
        add=sal*(per/100.00);
        printf("Novo salario: %0.2lf\n",nsal);
        printf("Reajuste ganho: %0.2lf\n",add);
        printf("Em percentual: %0.0lf %\n",per);
    }
    return 0;
}
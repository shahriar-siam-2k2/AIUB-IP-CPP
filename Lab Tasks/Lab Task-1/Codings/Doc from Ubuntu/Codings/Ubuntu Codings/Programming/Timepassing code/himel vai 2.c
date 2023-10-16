#include<stdio.h>
#include<string.h>

int main()
{
    double p,w,t,d,tkpu,tot;
    char m[3];

    printf("\t***PROGRAMME MONTHLY ELECTRICITY BILL DETERMINER***\n\n");

    printf("Enter first 3 letter of determining month(*example-->January=JAN/jan)=");
    gets(m);
    printf("Enter electricity energy after end of month(KW)=");
    scanf("%lf",&p);
    printf("Enter daily electricity runtime(hour)=");
    scanf("%lf",&t);
    printf("Enter the price of electricity per unit(৳)=");
    scanf("%lf",&tkpu);

    if(strcmp("jan",m)==0 || strcmp("JAN",m)==0)
    {
        d=31.0;
        w=p*(t*d);
        tot=w*tkpu;
        printf("\n\tEnergy= %0.2lf KW\n",p);
        printf("\tThe daily runtime of electricity= %0.2lf hour\n",t);
        printf("\tThe price of electricity per unit= %0.2lf ৳\n",tkpu);
        printf("\t_________________________________________________________\n");
        printf("\tTotal Energy of %s month= %0.2lf Unit(KWh)\n",m,w);
        printf("\tKnit price of electricity(%s)= %0.2lf ৳\n",m,tot);
        printf("\n\t***Programmed By Shahriar Ali Siam***\n");
    }
    else if(strcmp("feb",m)==0 || strcmp("FEB",m)==0)
    {
        d=28.0;
        w=p*(t*d);
        tot=w*tkpu;
        printf("\n\tEnergy= %0.2lf KW\n",p);
        printf("\tThe daily runtime of electricity= %0.2lf hour\n",t);
        printf("\tThe price of electricity per unit= %0.2lf ৳\n",tkpu);
        printf("\t_________________________________________________________\n");
        printf("\tTotal Energy of %s month (according to 28 days)= %0.2lf Unit(KWh)\n",m,w);
        printf("\tKnit price of electricity(%s)(according to 28 days)= %0.2lf ৳\n",m,tot);
        printf("\n\t***Programmed By Shahriar Ali Siam***\n");
    }
    else if(strcmp("mar",m)==0 || strcmp("MAR",m)==0)
    {
        d=31.0;
        w=p*(t*d);
        tot=w*tkpu;
        printf("\n\tEnergy= %0.2lf KW\n",p);
        printf("\tThe daily runtime of electricity= %0.2lf hour\n",t);
        printf("\tThe price of electricity per unit= %0.2lf ৳\n",tkpu);
        printf("\t_________________________________________________________\n");
        printf("\tTotal Energy of %s month= %0.2lf Unit(KWh)\n",m,w);
        printf("\tKnit price of electricity(%s)= %0.2lf ৳\n",m,tot);
        printf("\n\t***Programmed By Shahriar Ali Siam***\n");
    }
    else if(strcmp("apr",m)==0 || strcmp("APR",m)==0)
    {
        d=30.0;
        w=p*(t*d);
        tot=w*tkpu;
        printf("\n\tEnergy= %0.2lf KW\n",p);
        printf("\tThe daily runtime of electricity= %0.2lf hour\n",t);
        printf("\tThe price of electricity per unit= %0.2lf ৳\n",tkpu);
        printf("\t_________________________________________________________\n");
        printf("\tTotal Energy of %s month= %0.2lf Unit(KWh)\n",m,w);
        printf("\tKnit price of electricity(%s)= %0.2lf ৳\n",m,tot);
        printf("\n\t***Programmed By Shahriar Ali Siam***\n");
    }
    else if(strcmp("may",m)==0 || strcmp("MAY",m)==0)
    {
        d=31.0;
        w=p*(t*d);
        tot=w*tkpu;
        printf("\n\tEnergy= %0.2lf KW\n",p);
        printf("\tThe daily runtime of electricity= %0.2lf hour\n",t);
        printf("\tThe price of electricity per unit= %0.2lf ৳\n",tkpu);
        printf("\t_________________________________________________________\n");
        printf("\tTotal Energy of %s month= %0.2lf Unit(KWh)\n",m,w);
        printf("\tKnit price of electricity(%s)= %0.2lf ৳\n",m,tot);
        printf("\n\t***Programmed By Shahriar Ali Siam***\n");
    }
    else if(strcmp("jun",m)==0 || strcmp("JUN",m)==0)
    {
        d=30.0;
        w=p*(t*d);
        tot=w*tkpu;
        printf("\n\tEnergy= %0.2lf KW\n",p);
        printf("\tThe daily runtime of electricity= %0.2lf hour\n",t);
        printf("\tThe price of electricity per unit= %0.2lf ৳\n",tkpu);
        printf("\t_________________________________________________________\n");
        printf("\tTotal Energy of %s month= %0.2lf Unit(KWh)\n",m,w);
        printf("\tKnit price of electricity(%s)= %0.2lf ৳\n",m,tot);
        printf("\n\t***Programmed By Shahriar Ali Siam***\n");
    }
    else if(strcmp("jul",m)==0 || strcmp("JUL",m)==0)
    {
        d=31.0;
        w=p*(t*d);
        tot=w*tkpu;
        printf("\n\tEnergy= %0.2lf KW\n",p);
        printf("\tThe daily runtime of electricity= %0.2lf hour\n",t);
        printf("\tThe price of electricity per unit= %0.2lf ৳\n",tkpu);
        printf("\t_________________________________________________________\n");
        printf("\tTotal Energy of %s month= %0.2lf Unit(KWh)\n",m,w);
        printf("\tKnit price of electricity(%s)= %0.2lf ৳\n",m,tot);
        printf("\n\t***Programmed By Shahriar Ali Siam***\n");
    }
    else if(strcmp("aug",m)==0 || strcmp("AUG",m)==0)
    {
        d=31.0;
        w=p*(t*d);
        tot=w*tkpu;
        printf("\n\tEnergy= %0.2lf KW\n",p);
        printf("\tThe daily runtime of electricity= %0.2lf hour\n",t);
        printf("\tThe price of electricity per unit= %0.2lf ৳\n",tkpu);
        printf("\t_________________________________________________________\n");
        printf("\tTotal Energy of %s month= %0.2lf Unit(KWh)\n",m,w);
        printf("\tKnit price of electricity(%s)= %0.2lf ৳\n",m,tot);
        printf("\n\t***Programmed By Shahriar Ali Siam***\n");
    }
    else if(strcmp("sep",m)==0 || strcmp("SEP",m)==0)
    {
        d=30.0;
        w=p*(t*d);
        tot=w*tkpu;
        printf("\n\tEnergy= %0.2lf KW\n",p);
        printf("\tThe daily runtime of electricity= %0.2lf hour\n",t);
        printf("\tThe price of electricity per unit= %0.2lf ৳\n",tkpu);
        printf("\t_________________________________________________________\n");
        printf("\tTotal Energy of %s month= %0.2lf Unit(KWh)\n",m,w);
        printf("\tKnit price of electricity(%s)= %0.2lf ৳\n",m,tot);
        printf("\n\t***Programmed By Shahriar Ali Siam***\n");
    }
    else if(strcmp("oct",m)==0 || strcmp("OCT",m)==0)
    {
        d=31.0;
        w=p*(t*d);
        tot=w*tkpu;
        printf("\n\tEnergy= %0.2lf KW\n",p);
        printf("\tThe daily runtime of electricity= %0.2lf hour\n",t);
        printf("\tThe price of electricity per unit= %0.2lf ৳\n",tkpu);
        printf("\t_________________________________________________________\n");
        printf("\tTotal Energy of %s month= %0.2lf Unit(KWh)\n",m,w);
        printf("\tKnit price of electricity(%s)= %0.2lf ৳\n",m,tot);
        printf("\n\t***Programmed By Shahriar Ali Siam***\n");
    }
    else if(strcmp("nov",m)==0 || strcmp("NOV",m)==0)
    {
        d=30.0;
        w=p*(t*d);
        tot=w*tkpu;
        printf("\n\tEnergy= %0.2lf KW\n",p);
        printf("\tThe daily runtime of electricity= %0.2lf hour\n",t);
        printf("\tThe price of electricity per unit= %0.2lf ৳\n",tkpu);
        printf("\t_________________________________________________________\n");
        printf("\tTotal Energy of %s month= %0.2lf Unit(KWh)\n",m,w);
        printf("\tKnit price of electricity(%s)= %0.2lf ৳\n",m,tot);
        printf("\n\t***Programmed By Shahriar Ali Siam***\n");
    }
    else if(strcmp("dec",m)==0 || strcmp("DEC",m)==0)
    {
        d=31.0;
        w=p*(t*d);
        tot=w*tkpu;
        printf("\n\tEnergy= %0.2lf KW\n",p);
        printf("\tThe daily runtime of electricity= %0.2lf hour\n",t);
        printf("\tThe price of electricity per unit= %0.2lf ৳\n",tkpu);
        printf("\t_________________________________________________________\n");
        printf("\tTotal Energy of %s month= %0.2lf Unit(KWh)\n",m,w);
        printf("\tKnit price of electricity(%s)= %0.2lf ৳\n",m,tot);
        printf("\n\t***Programmed By Shahriar Ali Siam***\n");
    }
    else
    {
        printf("\n\tERROR\n");
        printf("You have to enter the charecter value of month by this format-->January=JAN/jan\n");
        printf("\n\t***Programmed By Shahriar Ali Siam***\n");
    }

    return 0;

}




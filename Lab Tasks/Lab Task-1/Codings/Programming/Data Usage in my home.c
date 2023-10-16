//Data Usage in home
#include<stdio.h>
#include<string.h>

int main()
{
    int n,i;
    double d,k=0.0,md,ls,l;
    char dn[200],dt[02];

    printf("\t\t***Programme Monthly Wi-Fi Data Usage Report***\n\n");
    printf("Enter device numbers= ");
    scanf("%d",&n);

    for(i=1 ; i<=n ; i++)
    {
        printf("Enter Device %d name, Data usage & the Data type(gb/mb)= ",i);
        scanf("%s %lf %s",&dn,&d,&dt);
        if(strcmp("MB",dt)==0 || strcmp("mb",dt)==0)
        {
            d=d/1000.00;//mb to gb converter
            k+=d;
        }
        else if(strcmp("GB",dt)==0 || strcmp("gb",dt)==0)
        {
            k+=d;
        }
    }
    printf("\n\t\t    Your total usage of Wi-Fi Data in this month is %0.2lf GB\n",k);
    md=35.79*k;
    ls=md-500;
    if(ls<0)
    {
        l=ls-(ls+ls);//Absolute value determiner
        printf("\n\t\t***According to monthly 1 GB Mobile Data price (Average 35.79 tk)***\n");
        printf("\n\t\t\tYour cost of this month= %0.2lf tk\n",md);
        printf("\n\t\t\t\t\t): SORRY :(\n");
        printf("\n\t\t\tYou are in LOSS project about %0.2lf tk!\n",l);
        printf("\t\t\t  (excluded monthly broadband fee=500 tk)\n");
        printf("\n\t\t\t***Programmed By Shahriar Ali Siam***\n");
    }
    else
    {
       printf("\n\t\t***According to monthly 1 GB Mobile Data price (Average 35.79 tk)***\n");
        printf("\n\t\t\tYour cost of this month= %0.2lf tk\n",md);
        printf("\n\t\t\t\t  (: Congratulations :)\n");
        printf("\n\t\t\t   You are SAVED about %0.2lf tk!\n",ls);
        printf("\t\t\t  (excluded monthly broadband fee=500 tk)\n");
        printf("\n\t\t\t***Programmed By Shahriar Ali Siam***\n");
    }


    return 0;
}

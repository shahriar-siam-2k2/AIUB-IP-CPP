//1049-Animal
#include<stdio.h>
#include<string.h>

int main()
{
    char a[30],b[30],c[30];
    scanf("%s %s %s",&a,&b,&c);
    if(strcmp("vertebrado",a)==0)
    {
        if(strcmp("ave",b)==0)
        {
            if(strcmp("carnivoro",c)==0)
            {
                printf("aguia\n");
            }
            else if(strcmp("onivoro",c)==0)
            {
                printf("pomba\n");
            }
        }
        else if(strcmp("mamifero",b)==0)
        {
            if(strcmp("onivoro",c)==0)
            {
                printf("homem\n");    
            }
            else if(strcmp("herbivoro",c)==0)
            {
                printf("vaca\n");
            }
        }
    }
    else if(strcmp("invertebrado",a)==0)
    {
        if(strcmp("inseto",b)==0)
        {
            if(strcmp("hematofago",c)==0)
            {
                printf("pulga\n");
            }
            else if(strcmp("herbivoro",c)==0)
            {
                printf("lagarta\n");
            }
        }
        else if(strcmp("anelideo",b)==0)
        {
            if(strcmp("hematofago",c)==0)
            {
                printf("sanguessuga\n");
            }
            else if(strcmp("onivoro",c)==0)
            {
                printf("minhoca\n");
            }
        }
    }
    
    return 0;
}





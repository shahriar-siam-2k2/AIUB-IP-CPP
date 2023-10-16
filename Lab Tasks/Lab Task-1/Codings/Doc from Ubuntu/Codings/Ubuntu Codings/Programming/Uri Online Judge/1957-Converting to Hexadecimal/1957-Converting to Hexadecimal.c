//1957-Converting to Hexadecimal
#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int d,i,h,c=0;
    char h1[30],h2[30];
    scanf("%d",&d);
    for(i=0 ;  ; i++)
    {
        h = d%16;
        if(h < 10)
        {
            h1[i] = h+48;
        }
        else
        {
            h1[i] = h+55;
        }
        d = d/16;
        c++;
        if(d==0)
        {
            break;
        }
    }
    d = c-1;
    for(i=0 ; i<=c ; i++)//inversing
    {
        h2[i] = h1[d];
        d--;
    }
    printf("%s\n",h2);
    return 0;
}

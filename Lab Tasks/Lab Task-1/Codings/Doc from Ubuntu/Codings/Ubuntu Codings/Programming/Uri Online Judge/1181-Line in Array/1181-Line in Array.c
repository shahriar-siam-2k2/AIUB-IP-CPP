//1181-Line in Array
#include<stdio.h>

int main()
{
    double M[17][17],Sum=0.0,avg;
    char s[6];
    int L,r,c,i;
    scanf("%d %s",&L,&s);
    for(r=0 ; r<12 ; r++)
    {
        for(c=0 ; c<12 ; c++)
        {
            scanf("%lf",&M[r][c]);
        }
    }
    for(i=0 ; i<12 ; i++)
    {
        Sum = Sum + M[L][i];
    }
    avg = Sum / 12.0;
    if(s[0]=='S')
    {
        printf("%0.1lf\n",Sum);
    }
    else if(s[0]=='M')
    {
        printf("%0.1lf\n",avg);
    }
    return 0;
}


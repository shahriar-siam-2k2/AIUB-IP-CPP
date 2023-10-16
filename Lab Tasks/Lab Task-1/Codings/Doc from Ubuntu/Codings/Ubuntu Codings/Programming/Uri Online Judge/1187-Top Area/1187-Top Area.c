//1187-Top Area
#include<stdio.h>

int main()
{
    double M[17][17],Sum=0.0,avg,d=0.0;
    char O[6];
    int r,c,ci,ri;
    scanf("%s",&O);
    for(r=0 ; r<12 ; r++)
    {
        for(c=0 ; c<12 ; c++)
        {
            scanf("%lf",&M[r][c]);
        }
    }
    for(ri=0 ; ri<5 ; ri++)
    {
        for(ci=ri+1 ; ci<(12-(ri+1)) ; ci++)
        {
            Sum = Sum + M[ri][ci];
            d++;
        }
    }
    avg = Sum / d;
    if(O[0]=='S')
    {
        printf("%0.1lf\n",Sum);
    }
    else if(O[0]=='M')
    {
        printf("%0.1lf\n",avg);
    }
    return 0;
}

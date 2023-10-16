#include<stdio.h>

int main()
{
    int N,money,hundred,fifty,twenty,ten,five,two,one;
    scanf("%d",&N);
    hundred=N/100;
    money=N%100;
    fifty=money/50;
    money=money%50;
    twenty=money/20;
    money=money%20;
    ten=money/10;
    money=money%10;
    five=money/5;
    money=money%5;
    two=money/2;
    one=money%2;
    printf("%d nota(s) de R$ 100,00\n",hundred);
    printf("%d nota(s) de R$ 50,00\n",fifty);
    printf("%d nota(s) de R$ 20,00\n",twenty);
    printf("%d nota(s) de R$ 10,00\n",ten);
    printf("%d nota(s) de R$ 5,00\n",five);
    printf("%d nota(s) de R$ 2,00\n",two);
    printf("%d nota(s) de R$ 1,00\n",one);
    return 0;
}

//1837-Preface
#include<stdio.h>

int main()
{
    int a,b,q,r,i,c;
    scanf("%d %d",&a,&b);
    if(a<0)
    {
        c=b;
        if(b<0)
        {
            c = b*-1;
        }
        for(r=0 ; r<c ; r++)
        {
            i = a-r;
            if(i%b==0)
            {
                break;
            }
        }
        q = i/b;
    }
    else
    {
        q = a/b;
        r = a%b;
    }
    printf("%d %d\n",q,r);
    return 0;
}

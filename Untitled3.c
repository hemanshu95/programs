#include<stdio.h>
int main()
{
    long t,temp;
    scanf("%ld",&t);
    long n,a,b,d,x,in;
    while(t-->0)
    {
        scanf("%ld%ld%ld%ld",&in,&a,&b,&n);
        if(n==1)
        {
            printf("%ld\n",in);
            continue;
        }
        if(b>a)
        {
            temp=b;
            b=a;
            a=temp;
        }

        if(a==b)
        {
            printf("%ld\n",in+(long)(n-1)*(long)(a));
            continue;
        }
        x=(n-1)*b+in;
        d=a-b;
        while(n-->0)
        {
            if(n)
            printf("%ld ",x);
            else
                printf("%ld",x);
            x+=d;
        }
        printf("\n");
    }
    return 0;
}

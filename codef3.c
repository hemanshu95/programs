#include<stdio.h>
int main()
{
    int t,temp;
    scanf("%d",&t);
    int n,a,b,d,x;
    while(t-->0)
    {
        scanf("%d\n%d\n%d\n",&n,&a,&b);
        if(n==1)
        {
            printf("0\n");
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
            printf("%ld\n",(long)(n-1)*(long)(a));
            continue;
        }
        x=(n-1)*b;
        d=a-b;
        while(n-->0)
        {
            if(n)
            printf("%d ",x);
            else
                printf("%d",x);
            x+=d;
        }
        printf("\n");
    }
    return 0;
}


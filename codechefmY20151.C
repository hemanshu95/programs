#include<stdio.h>
int main()
{
    int t,A,n,i,min1;
    long long sum;
    scanf("%d",&t);
    while(t-->0)
    {
        scanf("%d",&n);
        scanf("%d",&A);
        min1=A;
        sum=A;
        for(i=1;i<n;i++)
        {
            scanf("%d",&A);
            sum+=A;
            if(A<min1)
                min1=A;

        }
        if(min1<2)
            printf("-1\n");
        else
            printf("%lld\n",sum-min1+2);

    }

    return 0;
}

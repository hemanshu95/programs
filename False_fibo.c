#include<stdio.h>
long long ff(long long n)
{
    long long a=2,b=5,i,temp;
    if(n==0)
        return 2;
    if(n==1)
        return 5;
    for(i=1;i<n;i++)
    {
        temp=a;
        a=b%1000000007;
        b=((3*temp)+(2*a))%1000000007;
    }
    return b;
}
    /*if(n==0)
        return 2;
    if(n==1)
        return 5;

    return (2*ff(n-1) + 3* ff(n-2))%1000000007;
*/
/*}

        b=((2*temp)+(3*a))%1000000007;
    }
    return b;

    /*if(n==0)
        return 2;
    if(n==1)
        return 5;

    return (2*ff(n-1) + 3* ff(n-2))%1000000007;
*/
//}
int main()
{
    int t;
    scanf("%d",&t);
    long long n;
    while(t--)
    {
        scanf("%lld",&n);
        printf("%lld\n",ff(n));
    }
    return 0;
}

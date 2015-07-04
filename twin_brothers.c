#include<stdio.h>
long long pow1(int n)
{
    if(n==1)
        return 7;

    return (7*pow1(n-1))%1000000007;
}
int main()
{
    int t;
    scanf("%d",&t);
    long n;
    while(t--)
    {
        scanf("%ld",&n);
        if(n<13)
        {
            printf("0\n");
            continue;
        }
        else if(n<=14)
        {
            printf("1\n");
            continue;
        }
        if(n%2)
            n-=13;
        else
            n-=14;
        n/=2;
        printf("%ld\n",pow1(n));
    }
    return 0;
}

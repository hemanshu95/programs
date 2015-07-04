#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    long long int n;
    while(t--)
    {
        scanf("%lld",&n);
        if(n%2)
            n--;
        printf("%lld\n",n);
    }
    return 0;
}

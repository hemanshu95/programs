#include<stdio.h>
int main()
{
    long t,i;
    long long m;
    long double k;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%llf",&k);
        m=k;
        if((k-(long double)m)!=0)
            printf("NO\n");
        else
            printf("YES\n");

    }
    return 0;
}

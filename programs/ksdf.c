#include<stdio.h>
#include<math.h>
int main()
{
    long long unsigned t,i,x=0,y=0,q;
    scanf("%lld",&t);
    long long unsigned n,m;
    for(i=0;i<t;i++)
    {
        scanf("%llu",&n);
        m=n;
        x=0;
        y=0;
        q=0;
        while(m%2==0)
        {
            x++;
            m/=2;
        }
        while(m%2==1)
        {
            q*=2;
            q++;
            y++;
            m/=2;
        }
        q*=pow(2,x);
        n-=q;
        n+=(pow(2,y-1)-1+pow(2,x+y));
        printf("%llu\n",n);
    }
    return 0;
}


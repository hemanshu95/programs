#include<bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d",x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
int n,k,a[101],i;
int main()
{
    sd(n);
    for(i=0;i<n;i++)
    {
        sd(k);
        a[k]++;
    }
    for(i=0;i<101;i++)
    {
        if(a[i]==1)
        {
            pd(i);
            break;
        }

    }
    return 0;
}

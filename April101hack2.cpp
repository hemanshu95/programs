#include<bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d",x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
int main()
{
    int n;
    sd(n);
    int a[n],i,j,k,x=0;
    for(i=0;i<n;i++)
        sd(a[i]);
    for(i=1;i<n-1;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[j]<a[i])
            {
                for(k=i+1;k<n;k++)
                {
                    if(a[k]<a[j])
                        x++;
                }
            }
        }

    }
    pd(x);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d",x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
int t,a[2000001]={},i,j,n;
int main()
{
    for(i=2;i<2000001;i++)
    {
        if(a[i]==0)
        {
            for(j=2*i;j<2000001;j+=i)
            {
                a[j]=1;
            }
        }
    }
    /*for(i=2;i<100;i++)
    {
        if(!a[i])
        printf("%d ",i)

    }*/
    sd(t);
    while(t-->0)
    {
        sd(n);
        for(i=0;i<n-1;i++)
        {
            if(a[n+i]==0 && a[n-i]==0 )
                break;
        }
        if(i<n-1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}

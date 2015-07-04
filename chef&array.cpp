#include<bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d",x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
long long A[100001],m,ans;
int main()
{
    int n,n2,x,z,y,x1,y1,i,j,mina,maxa;
    sd(n);
    n2=n-1;
    for(i=0;i<n;i++)
        slld(A[i]);
    //for(i=0;i<n;i++)
      //  printf("%lld",A[i]);
    scanf("%lld %d %d",&m,&x1,&y1);
    //printf("%lld %d %d",m,x1,y1);
    mina=min(x1,y1);
    maxa=max(x1,y1);
    //printf("\n%d %d qqwert\n",mina,maxa);
    z=A[mina];
    for(j=mina+1;j<=maxa;j++)
    {
        if(A[j]>z)
            z=A[j];
    }
    ans=z;
    //printf("\n%lld\n",ans);
    for(i=1;i<m;i++)
    {
        x=(x1+7)%n2;
        y=(y1+11)%n;
        x1=x;
        y1=y;
        mina=min(x,y);
        maxa=max(x,y);
        z=A[mina];
        for(j=mina+1;j<=maxa;j++)
        {
            if(A[j]>z)
                z=A[j];
        }
        ans+=z;
        //printf("\n%lld %d\n",ans,z);
    }
    printf("%lld",ans);
    return 0;
}

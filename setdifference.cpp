#include<bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d",x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
#define mod 1000000007
long long S,R,Y;
long long A[100001],B[100001],f[100001],ff[100001],fl[100001];

int main()
{
    int t;
    long long n,N,i,x,j;
    sd(t);
    while(t-->0)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&A[i]);
        }
        sort(A,A+n);
        x=0;
        for(i=1,j=0;i<n;i++)
        {
            if(A[i]!=A[x])
            {
                B[j]=A[x];
                f[j]=i-x;
                x=i;
                if(j==0)
                {
                    ff[0]=(f[0]+1)%mod;
                }
                else
                {
                    ff[j]=((ff[j-1]%mod)*((f[j]+1)%mod))%mod;
                }
                j++;

            }

        }
        B[j]=A[x];
        f[j]=i-x;
        N=j;
        if(j==0)
        {
            ff[0]=(f[0]+1)%mod;
        }
        else
        {
            ff[j]=((ff[j-1]%mod)*((f[j]+1)%mod))%mod;

        }
        fl[j]=(f[j]+1)%mod;
        for(--j;j>0;j--)
        {
            fl[j]=((fl[j+1]%mod)*((f[j]+1)%mod))%mod;
        }
        S=0;
        for(i=0;i<N;i++)
        {
            //B[a+1]*f[a+1]*(X[0:a]-1) 0-->N-2
            //-B[b]*f[b]*(X[b+1:N-1]-1) 0-->N-2
            if(ff[i]>0)
            {
                S+=((((B[i+1]%mod)*(f[i+1]%mod))%mod)*((ff[i]-1)%mod))%mod;
            }
            else
                S+=((((B[i+1]%mod)*(f[i+1]%mod))%mod)*(mod-1))%mod;
            S%=mod;
            Y=S;

            if(fl[i+1]>0)
            {


                R=((((B[i]%mod)*(f[i]%mod))%mod)*((fl[i+1]-1)%mod))%mod;
                if(R%mod>0)
                {
                    S+=((mod-R)%mod);
                }

            }
            else
            {
                S+=(((B[i]%mod)*(f[i]%mod))%mod);
            }
            S%=mod;
        }

        cout<<S%mod;
        cout<<endl;
        //B[a+1]*f[a+1]*(X[0:a]-1) 0-->N-2
        //-B[b]*f[b]*(X[b+1:N-1]-1) 0-->N-2
    }
    return 0;
}

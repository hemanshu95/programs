#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d",x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
#define mod 1000000007
long long S,A[100001];//,B[100001],f[100001]
long long n,i,FF,R,x,j,N,J;//,ff[100001],fl[100001];

int main()
{
    int t;
    //long long n,N,i,x,j;
    sd(t);
    while(t-->0)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&A[i]);
        }
        sort(A,A+n);
        /*x=0;
        for(i=1,j=0;i<n;i++)
        {
            if(A[i]!=A[x])
            {
                B[j]=A[x];
                f[j]=i-x;
                x=i;
                j++;

            }

        }
        B[j]=A[x];
        f[j]=i-x;
        */N=j;
        FF=1;
        S=0;
        J=0;
        for(i=1;i<=n-1;i++)
        {
            FF=(FF*2)%mod;
            if(FF==0)
                S+=((A[i]*(mod-1))%mod);
            else
                S+=((A[i]*(FF-1))%mod);
            S%=mod;

  //          cout<<endl<<S-J<<endl;
            J=S;
        }
        FF=1;//f[N]-1;

        for(i=n-2;i>=0;i--)
        {
            FF=(FF*2)%mod;

            if(FF==0)
                R=((A[i]*(mod-1))%mod);
            else
                R=(A[i]*(FF-1))%mod;
//            cout<<R<<endl;
            R=mod-R;
            S+=R;
            S%=mod;
            //cout<<endl<<S-J<<endl;
        }
        cout<<S<<endl;
        //B[a+1]*f[a+1]*(X[0:a]-1) 0-->N-2
        //-B[b]*f[b]*(X[b+1:N-1]-1) 0-->N-2
    }
    return 0;
}

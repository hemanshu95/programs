#include<bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d",x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)

#include<iostream>
using namespace std;
#include<vector>
long long x;
/* This function calculates (a^b)%MOD */
long long power(long long a,long long b,long long n)
{

    if (b==0)
        return 1;
    else if (b%2==0)
    {
        x=power(a,b/2,n);
        return ((x%n)*x)%n;
    }
    else
    {
        x=power(a,(b-1)/2,n);
        return (((x*a)%n)*x)%n;

    }

}

/*  Modular Multiplicative Inverse
    Using Euler's Theorem
    a^(phi(m)) = 1 (mod m)
    a^(-1) = a^(m-2) (mod m) */
long long InverseEuler(long long n, long long MOD)
{
    return power(n,MOD-2,MOD);
}

long long factMOD(long long n, long long MOD)
{
    long long res = 1;
    while (n > 0)
    {
        for (long long i=2, m=n%MOD; i<=m; i++)
            res = (res * i) % MOD;
        if ((n/=MOD)%2 > 0)
            res = MOD - res;
    }
    return res;
}
long long Cy(int n, int r, int MOD)
{
    vector< vector<long long> > C(2,vector<long long> (r+1,0));

    for (int i=0; i<=n; i++)
    {
        for (int k=0; k<=r && k<=i; k++)
            if (k==0 || k==i)
                C[i&1][k] = 1;
            else
                C[i&1][k] = (C[(i-1)&1][k-1] + C[(i-1)&1][k])%MOD;
    }
    return C[n&1][r];
}

long long smallC(long long n, long long r, long long MOD)
{
    long long x=1,m1,m2,i;
    m1=max(n-r,r);
    m2=min(n-r,r);
    for(i=m1+1;i<=n;i++)
    {
        x=((i%MOD)*x)%MOD;
    }
    for(i=2;i<=m2;i++)
    {
        x=(InverseEuler(i,MOD)*x)%MOD;
    }

    return x;
}
long long Lucas(int n, int m, int p)
{
    if (n==0 && m==0) return 1;
    int ni = n % p;
    int mi = m % p;
    if (mi>ni) return 0;
    return Lucas(n/p, m/p, p) * Cy(ni, mi, p);
}

long long C2(int n, int r, int MOD)
{
    return Lucas(n, r, MOD);
}

long long N,L,R;
long long t;
int main()
{
    sd(t);
    while(t-->0)
    {
        scanf("%lld %lld %lld",&N,&L,&R);
        if(N>0 && L<=R)
            printf("%lld\n",C2(N+R-L+1,R-L+1,1000003)-1);
        else
            printf("0\n");
        //if(N>(L-R+1))
          //  N=L-R+1;

    }
    return 0;
}

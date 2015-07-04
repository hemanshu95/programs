#include<bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d",x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)

#include<iostream>
using namespace std;
#include<vector>

/* This function calculates power of p in n! */
long long countFact(long long n, long long p)
{
    long long k=0;
    while (n>=p)
    {
        k+=n/p;
        n/=p;
    }
    return k;
}

/* This function calculates (a^b)%MOD */
long long pow(long long a, long long b, long long MOD)
{
    long long x=1,y=a;
    while(b > 0)
    {
        if(b%2 == 1)
        {
            x=(x*y);
            if(x>MOD) x%=MOD;
        }
        y = (y*y);
        if(y>MOD) y%=MOD;
        b /= 2;
    }
    return x;
}

/*  Modular Multiplicative Inverse
    Using Euler's Theorem
    a^(phi(m)) = 1 (mod m)
    a^(-1) = a^(m-2) (mod m) */
long long InverseEuler(long long n, long long MOD)
{
    return pow(n,MOD-2,MOD);
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

long long C(long long n, long long r, long long MOD)
{
    if (countFact(n, MOD) > countFact(r, MOD) + countFact(n-r, MOD))
        return 0;

    return (factMOD(n, MOD) *
            ((InverseEuler(factMOD(r, MOD), MOD) *
            InverseEuler(factMOD(n-r, MOD), MOD)) % MOD)) % MOD;
}

long long Lucas(int n, int m, int p)
{
    if (n==0 && m==0) return 1;
    int ni = n % p;
    int mi = m % p;
    if (mi>ni) return 0;
    return ((Lucas(n/p, m/p, p)%p) * (C(ni, mi, p)%p))%p;
}

long long C2(int n, int r, int MOD)
{
    return Lucas(n, r, MOD);
}
long long N,L,R;
long long t,d;
int main()
{
    slld(t);
    while(t-->0)
    {
        scanf("%lld %lld %lld",&N,&L,&R);
        d=C2(N+R-L+1,N,1000003);
        if(d==0)
            d=1000003;
        d--;
        //if(N>0 && L<=R)
            printf("%lld\n",d);
        //else
          //  printf("0\n");
        //if(N>(L-R+1))
          //  N=L-R+1;

    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
long long x;
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
int main()
{

}

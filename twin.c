//#include<stdio.h>
#include<iostream>
using namespace std;

long long powe1(long long m)
{

    if(m==1)
        return 7;
    long long x;
    if(m%2==0)
    {
        x=powe1(m/2);
        x=(x*x)%1000000007;
        return x;
    }
    else
    {
        x=powe1((m-1)/2);
        x=(x*x)%1000000007;
        x=(x*7)%1000000007;
        return x;
    }
}
int main()
{
    int t;
    //
    //scanf("%d",&t);
    cin>>t;
    long long n;
    while(t--)
    {
        cin>>n;
        //scanf("%lld",&n);
        if(n<13)
        {
            cout<<"0\n";
            //printf("0\n");
            continue;
        }
        else if(n<=14)
        {
            cout<<"1\n";
            //printf("1\n");
            continue;
        }
        if(n%2==1)
            n-=13;
        else
            n-=14;
        n/=2;
        cout<<powe1(n)%1000000007;
        //printf("%lld\n",powe1(n)%1000000007);
    }
    return 0;
}


#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<vector>
#include<queue>
#include<stack>
#include<bitset>
#include<utility>
#include<limits.h>
#include<set>

#define v2d(a,n,m) vector< vector<int> > a(n,vector<int>(m,0))
#define v1d(a,n) vector<int> a(n,0)
#define ve(a) vector<int> a
#define v2e(a) vector< vector<int> > a
#define frl(i,n,m) for(int i=n;i<m;i++)
#define frl1(i,n,m) for(int i=n;i<=m;i++)
#define f1 first
#define s1 second

using namespace std;
typedef pair<int,int> pi;
typedef pair<string,int> psi;
long long next(long long n)
{
    int i=0;
    while(n%10!=4 && n!=0)
    {
        i++;
        n/=10;
    }
    if(n==0)
    {
        n=4;
      //  sz++;
    }
    else
    n+=3;

    while(i--)
    {
        n*=10;
        n+=4;
    }
    return n;

}


int main()
{
    ios_base::sync_with_stdio(false);
    long long n1=4,x=1;
    long long a[15];
    int i=0;
    /*while(i<14)
    {
        if(n1%x==0)
        {
            a[i]=n1;
cout<<x<<" "<<n1<<endl;
            x*=2;
            i++;
        }
        else
        {
            n1=next(n1);
        }
    }*/

    a[0]=1;
    for(int i=2;i<=14;i+=2)
    {
        a[i]=a[i-2]*4;
        a[i-1]=a[i];
    }
    //cout<<pow(5,13)*a[13];
    long long n,aa,ab;
    bool flag=false;
    cin>>n;
    while(n--)
    {
        cin>>aa;
        ab=aa;
        int i=0;
        flag=false;
        while(ab%10==0)
        {
            ab/=10;
        }
        while(ab%5==0)
        {
            i++;
            ab/=5;
        }
        cout<<a[i]*aa<<endl;

    }
    return 0;
}

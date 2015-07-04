#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<vector>
#include<queue>
#include<stack>
long a[100001],b[100001];
long long n,k;
using namespace std;
int check(int a1,int b1)
{
    if(a1<0 ||b1<0)
        return 0;

    if(abs(a[a1]-b[b1])<=k)
        return check(a1-1,b1-1)+1;
    if(a[a1]>b[b1] )
        return check(a1-1,b1);
    if(a[a1]<b[b1])
        return check(a1,b1-1);
    //return max(check(a1-1,b1),check(a1,b1-1));
}
int main()
{
    ios_base::sync_with_stdio(false);

    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++)
        cin>>b[i];
    sort(b,b+n);
    int x=check(n-1,n-1);
    cout<<x;
    return 0;
}

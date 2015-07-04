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

#define v2d(a,n,m) vector< vector<int> > a(n,vector<int>(m,0))
#define v1d(a,n) vector<int> a(n,0)
#define ve(a) vector<int> a
#define v2e(a) vector< vector<int> > a
#define frl(i,n,m) for(int i=n;i<m;i++)
#define frl1(i,n,m) for(int i=n;i<=m;i++)

using namespace std;
typedef pair<int,int> pi;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,a,sum,a1,maxsum,max1,min1;
    cin>>t;
    while(t--)
    {
        sum=0;
        maxsum=0;
        a1=0;
        cin>>n;
        max1=INT_MIN;
        min1=INT_MAX;
        frl(i,0,n)
        {
            cin>>a;
            sum+=a;
            if(maxsum<sum)
                maxsum=sum;
            if(sum<0)
                sum=0;
            if(a>0)
                a1+=a;
            if(a>max1)
                max1=a;
            if(a<min1)
                min1=a;
        }
        if(max1>0)
            cout<<maxsum<<" "<<a1<<endl;
        else
            cout<<max1<<" "<<max1<<endl;
    }
    return 0;
}

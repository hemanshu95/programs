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
int t,n,a[10000],s,first;
int cost(int &f,int &l)
{
    return ((l-f)/5)+(((l-f)%5)/2) +(((l-f)%5)%2);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin>>t;
    while(t--)
    {
        cin>>n;
        int min1=INT_MAX;
        frl(i,0,n)
        {
            cin>>a[i];
            if(a[i]<min1)
                min1=a[i];
        }
        //sort(a,a+n);

        first=min1;
        s=0;
        frl(i,0,3)
        {

            frl(i,1,n)
            {
                s+=cost(first,a[i]);

            }
            first--;
        }
        cout<<s<<endl;
    }


    return 0;
}

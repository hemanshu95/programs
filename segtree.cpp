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
int n,l,size1;
int *a;
void constructSegTree()
{
    size1=(1<<(l+1));
    cin>>n;
    l=ceil(log2(n));
    a=new int[size1+1];
    //int a[(1<<(l+1))];
    //cout<<(1<<(l+1));
    int last=(1<<l)+n,i;
    for( i=(1<<l);i<last;i++)
    {
        cin>>a[i];
       // cout<<i<<" "<<a[i]<<endl;
        //cout<<a[i]<<" ";
    }
    //cout<<endl<<(1<<l)<<" "<<last<<endl;
    last=(1<<(l+1));
    //frl(last,)
    for(;i<last;i++)
    {
        a[i]=INT_MAX;
      //  cout<<a[i]<<" ";
    }
    //cout<<endl;
    int j=l,x;
    while(j--)
    {
        last=1<<(j+1);
        for(int i=(1<<j);i<last;i++)
        {
            x=2*i;
            a[i]=min(a[x],a[x+1]);
           // cout<<a[i]<<" ";
        }
        //cout<<endl;
    }

}
int query(int root,int left_leaf,int right_leaf,int u,int v)
{
    if(u<=left_leaf && right_leaf<=v)
        return a[root];
    int mid=(left_leaf+right_leaf)/2,left_child = root*2,right_child = left_child+1;
    //if(mid%2==0)
    //mid;
    //mid/=2;
    //cout<<root<<" "<<left_leaf<<" "<<right_leaf<<" "<<u<<" "<<v<<" "<<mid<<" "<<left_child<<" "<<right_child<<endl;
   // char c;
    //cin>>c;
    int l=INT_MAX,r=l;

    if(u <= mid) l = query(left_child, left_leaf, mid, u, v);

	if(v > mid) r = query(right_child, mid+1, right_leaf, u, v);
    //cout<<l<<" "<<r<<endl;
    return min(l,r);
}
int main()
{
    ios_base::sync_with_stdio(false);
   // constructSegTree();
  //  int *a=
    constructSegTree();
    int x,y;
    cin>>x>>y;
    //cout<<a[5]<<"hello"<<endl;
    cout<<query(1,1<<l,(1<<(l+1))-1,x+(1<<l)-1,y+(1<<l)-1)<<endl;
    return 0;
}

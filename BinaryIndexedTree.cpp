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

int getsum(int *tree,int index,int n)
{
    index+=1;
    int sum=0;
    while(index>0)
    {
        sum+=tree[index];
        index-=(index&(-index));
    }
    return sum;
}

void update(int* tree,int index,int val,int n)
{
    index+=1;
    while(index<=n)
    {
        tree[index]+=val;
        index+=(index&(-index));

    }
}


int* construct(int arr[],int n)
{
    int* BitTree=new int[n+1];
    frl1(i,0,n)
        BitTree[i]=0;
    frl(i,0,n)
    {
        update(BitTree,i,arr[i],n);
    }
    return BitTree;
}
int main()
{
    ios_base::sync_with_stdio(false);
    int a[100],n;
    cin>>n;
    frl(i,0,n)
        cin>>a[i];
    int* BitTree=construct(a,n);
    frl(i,1,n+1)
        cout<<BitTree[i]<<" ";
    cout<<endl<<getsum(BitTree,5,n)<<" "<<getsum(BitTree,2,n)<<" "<<getsum(BitTree,5,n)-getsum(BitTree,2,n);

    return 0;
}

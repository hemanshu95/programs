#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<vector>
#include<queue>
#include<stack>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,k,l,x=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>l;
        if(l%k==0)
        x++;
    }
    cout<<x;
    return 0;
}

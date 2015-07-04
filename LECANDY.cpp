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
    int t,n,c,k,s;
    cin>>t;
    while(t-->0)
    {
        cin>>n>>c;
        s=0;
        for(int i=0;i<n;i++)
        {
            cin>>k;
            s+=k;
        }
        if(s<=c)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}

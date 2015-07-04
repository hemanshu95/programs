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
    int t,n,f,s;
    long long r;
    cin>>t;
    while(t-->0)
    {
        cin>>n;
        cin>>f;
        r=f;
        for(int i=1;i<n;i++)
        {
            cin>>s;
            if(s>f)
                r+=s-f;
            f=s;
        }
        cout<<r<<endl;
    }
    return 0;
}

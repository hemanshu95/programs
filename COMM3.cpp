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
    int t,n,a[3][2],x,r;
    cin>>t;
    while(t-->0)
    {
        cin>>n;
        for(int i=0;i<3;i++)
            cin>>a[i][0]>>a[i][1];
        n*=n;
        r=0;
        x=pow(a[0][0]-a[1][0],2)+pow(a[0][1]-a[1][1],2);
        if(x<=n)
            r++;

        x=pow(a[0][0]-a[2][0],2)+pow(a[0][1]-a[2][1],2);
        if(x<=n)
            r++;

        x=pow(a[2][0]-a[1][0],2)+pow(a[2][1]-a[1][1],2);
        if(x<=n)
            r++;
        if(r>=2)
        cout<<"yes\n";
        else
        cout<<"no\n";
    }
    return 0;
}

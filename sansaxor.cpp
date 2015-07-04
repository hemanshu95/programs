#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<vector>
#include<queue>
#include<stack>
int t,n,a,x;//a[100000];
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin>>t;
    while(t-->0)
    {
        cin>>n;
        x=0;
        if(n%2==0)
        {    cout<<"0\n";
            for(int i=0;i<n;i++)
            {
                cin>>a;
            }
        }
        else
        {
            cin>>a;
            for(int i=0;i<(n-1)/2;i++)
            {
                cin>>a;
                x^=a;
                cin>>a;
            }
            cout<<x<<"\n";
        }
    }
    return 0;
}

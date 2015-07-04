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
    int j,t,n,x;
    cin>>t;
    int a[12];
    a[0]=1;
    for(int i=1;i<12;i++)
    {
        a[i]=a[i-1]*2;
    }
    while(t-->0)
    {
        cin>>n;
        x=0;
        j=11;
        while(n>0)
        {
            x+=(n/a[j]);
            n%=a[j];
            j--;
        }
        cout<<x<<endl;
    }
    return 0;
}

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
    int i,n,k,x=0;
    cin>>n>>k;

    char a[n+k],b[n];

    cin>>a;
    //cout<<a<<endl;
    if(a[0]=='1')
        b[0]='1';
    else
        b[0]='0';
    for(i=1;i<n;i++)
    {
        x^=(b[i-1]-'0');
        if((i-k)>=0)
            x^=(b[i-k]-'0');
        b[i]=(x^(a[i]-'0'))+'0';
    }
    b[i]='\0';
    cout<<b;
    return 0;
}

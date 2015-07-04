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
    int a,b,n,x;
    cin>>a>>b>>n;
    if(n==1)
        cout<<a;
    else if(n==2)
        cout<<b;
    else
    {
        n-=2;
        while(n--)
        {
            x=a+b*b;
            a=b;
            b=x;
        }
        cout<<x;

    }
    return 0;
}

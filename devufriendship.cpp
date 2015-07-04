#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int a[101];
int main()
{
    int t,n,r,x;
    cin>>t;
    while(t-->0)
    {
        cin>>n;
        for(int i=1;i<=100;i++)
            a[i]=0;
        for(int i=0;i<n;i++)
        {
            cin>>r;
            a[r]++;
        }
        x=0;
        for(int i=1;i<=100;i++)
        {
            if(a[i]>0)
                x++;
        }
        cout<<x<<endl;
    }
    return 0;
}

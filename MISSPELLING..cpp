#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,t,j=1;
    char a[81];
    cin>>t;
    while(t-->0)
    {
        cin>>n>>a;
        cout<<j<<" ";
        for(int i=0;i<n-1;i++)
            cout<<a[i];
        for(int i=n;a[i]!='\0';i++)
            cout<<a[i];
        cout<<endl;
        j++;
    }

    return 0;
}

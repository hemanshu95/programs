//#include<bits/stdc++.h>
#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
int a[50000],n;
int main()
{
    cout<<stoi("35")+3;
    int t,i;
    scanf("%d",&t);
    while(t-->0)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            if(a[i]<=(i+1))
                break;
        }
        if((i+1)<n)
            cout<<"Killed "<<i+1<<"\n";
        else
            cout<<"Bhai Ho!\n";
    }
    return 0;
}

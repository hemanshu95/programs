#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int peakFinder(int f,int l,int a[])
{
    int m=(f+l)/2;
    if( a[m] < a[m-1] )
        return peakFinder(f,m-1,a);
    if( a[m] < a[m+1] )
        return peakFinder(m+1,l,a);
    return a[m];

}
int main()
{
    int p,n,f=0,l,m,flag=1;
    cin>>n;
    int a[n];
    l=n-1;
    m=(f+l)/2;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    p=peakFinder(0,n-1,a);
    cout<<p;
    return 0;
}

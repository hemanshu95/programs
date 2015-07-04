#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int a[100][100];
int peakFinder(int f,int l,int row,int col)
{
    int m=(f+l)/2,j=0;;
    int max1=a[0][m];

    for(int i=1;i<row;i++)
    {
        if(a[i][m]>=max1)
        {
            max1=a[i][m];
            j=i;
        }

    }
    if(f==l)
        return max1;
    if(m>0 && a[j][m]<a[j][m-1])
        return peakFinder(f,m-1,row,col);
    if(m<col-1 && a[j][m]<a[j][m+1])
        return peakFinder(m+1,l,row,col);

    return max1;
}
int main()
{
    int m,n;
    cin>>m>>n;
   //3 int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int x=peakFinder(0,n-1,m,n);
    cout<<x;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int a[21][21];
int  main()
{
    int i,j;
    a[0][0]=1;
    for(i=1;i<=20;i++)
    {
        a[i][0]=1;
        a[i][i]=1;
        for(j=1;j<i;j++)
        {
            a[i][j]=a[i-1][j-1]+a[i-1][j];

        }
    }
    cout<<a[20][10];
    cin>>a[0][0];
}

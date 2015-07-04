#include<bits/stdc++.h>
using namespace std;
long long a[100000][100000];
int  main()
{
    long i,j;
    a[0][0]=1;
    for(i=1;i<=40;i++)
    {
        a[i][0]=1;
        a[i][i]=1;
        for(j=1;j<i;j++)
        {
            a[i][j]=a[i-1][j-1]+a[i-1][j];

        }
    }
    cout<<a[40][20];
    cin>>a[0][0];
}

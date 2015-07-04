#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int i,j,a[10][10],t,b[10];
    scanf("%d",&t);
    while(t-->0)
    {
        for(i=1;i<=9;i++)
        {
            for(j=1;j<=9;j++)
                scanf("%d",&a[i][j]);
            b[i]=0;
        }
        for(i=1;i<=9;i++)
        {
            for(j=1;j<=9;j++)
                b[a[j][i]]++;
            for()
        }
    }

    return 0;
}

#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
bool a[100000];
int o,z;
int main()
{
    int t,n,k;
    scanf("%d",&t);
    while(t-->0)
    {
        scanf("%d",&n);
        o=0;
        z=0;
        for(int i=0;i<n;i++)
        {
            cin>>k;
            if(k==1)
            {
                a[i]=true;
                o++;
            }
            else
            {
                a[i]=false;
                z++;
            }
        }
        if(o%2==0)
        {
            cout<<z<<endl;

        }
        else
        {
            cout<<o<<endl;
        }
    }
    return 0;
}

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
    int t,i,j,nz,k,a[64];
    unsigned long long n;
    cin>>t;
    while(t-->0)
    {
        cin>>n;
        nz=0;
        k=0;
        i=0;
        while(n>0)
        {
            a[i]=n%2;
            n/=2;
            if(a[i]==1)
            {
                k++;
            }
            i++;
        }
        for(j=0;j<i;j++)
        {
            if(a[j]==1)
            break;
        }
        if(j==0)
        {
            nz=k-1;
        }
        else
        {
            nz=k+j-1;
        }
        if(nz%2==0)
            cout<<"Richard\n";
        else
            cout<<"Louise\n";
    }

    return 0;
}

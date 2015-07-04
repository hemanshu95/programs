#include<algorithm>
#include<iostream>
using namespace std;
int a[100],i,t,n,flag=0,x;
int main()
{
    cout<<abs(-10);
    cin>>t;
    while(t-->0)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<n-1;i++)
        {
            if(a[i]!=a[i+1] && flag==0)
            {
                break;
            }
            else if(a[i]==a[i+1])
            {
                flag=1;
            }
            else
            {
                flag=0;
            }
        }
        cout<<a[i]<<"\n";

    }

    return 0;
}

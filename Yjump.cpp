#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int i,n,k,a[100];
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        if (abs(a[i]-a[i-1])>k)
            break;
    }
    cout<<i;
    return 0;
}

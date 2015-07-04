#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long t,n=1,k=0,i;
    cin>>t;
    long a[t];
    for(i=0;i<t;i++)
        cin>>a[i];
    sort(a,a+t);
    k=a[0]+4;
    for(i=1;i<t;i++)
    {
        if(a[i]>k)
        {
            k=a[i]+4;
            n++;
        }
    }
    cout<<n;
    return 0;
}

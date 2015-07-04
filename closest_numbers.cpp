#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long n,i;
    cin>>n;
    long A[n],B[n-1],mina=0;
    for(i=0;i<n;i++)
        cin>>A[i];
    sort(A,A+n,greater<int>());
    for(i=0;i<n-1;i++)
        B[i]=A[i]-A[i+1];
    mina=B[i];
    for(i=0;i<n-1;i++)
    {
        if(B[i]<mina)
            mina=B[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(B[i]==mina)
            cout<<A[i]<<" "<<A[i+1]<<" ";
    }
    return 0;
}

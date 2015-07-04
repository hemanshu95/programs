#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int t,flag=1,i;
    long long n,k,A[1000],B[1000];
    cin>>t;
    while(t--)
    {
        flag=1;
        cin>>n>>k;
        for(i=0;i<n;i++)
            cin>>A[i];
        for(i=0;i<n;i++)
            cin>>B[i];
        sort(A,A+n-1,greater<int>());
        sort(B,B+n-1);
        for(i=0;i<n;i++)
        {
            if(B[i]+A[i]<k)
            {
                cout<<"NO\n";
                flag=0;
                break;
            }
        }
        if(flag)
            cout<<"YES\n";

    }


    return 0;

}

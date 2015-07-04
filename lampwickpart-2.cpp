#include<bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d",x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
int t;
long k,n,max1,A[5000000],i;
int main()
{
    //sd(t);
    cin>>t;
    while(t-->0)
    {
        //scanf("%ld",&n);
        //scanf("%ld",&A[0]);
        cin>>n;
        cin>>A[0];
        k=0;
        max1=0;
        for(i=1;i<n;i++)
        {
            cin>>A[i];
            //scanf("%ld",A[i]);
            if(A[i]==A[i-1])
                k++;
            else
            {
                max1=max(max1,k);
                k=0;
            }
        }
        max1=max(max1,k);
        cout<<max1<<endl;
        //printf("%ld\n",k);
    }
    return 0;
}


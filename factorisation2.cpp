#include<iostream>
#include<math.h>
//using ios_base::sync_with_stdio(false);

using namespace std;
bool a[1500];
int p[300];
int main()
{
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);
    int i,n,j=0,x=1500,t,l;
    //cout<<x;
    long long sum=0;
    for(i=2;i<x;i++)
    {
        if(!a[i])
        {
            for(l=2*i;l<=x;l+=i)
            {
                a[l]=true;
            }
            p[j]=i;
         //   cout<<p[j]<<" ";
            j++;
        }

    }
    cin>>t;
    while(t-->0)
    {
        cin>>n;
        for(i=0;p[i]<=n &&p[i]>0 ;i++)
        {
            if(n%p[i]==0)
            {
               // cout<<p[i]<<"+";
                n/=p[i];
                sum+=p[i];
                i--;
            }

        }
        if(n>1)
            sum=sum+n;
       // cout<<endl;

    }
    cout<<sum;
    return 0;
}

#include<iostream>
#include<math.h>
//using ios_base::sync_with_stdio(false);

using namespace std;
long gc,a[100000],i,max1,min1;
int t;
long gcd(long x,long b)
{
    if(x%b==0)
        return b;
    return gcd(b,x%b);
}

int main()
{
    long n,k;
    //cin.sync_with_stdio(false);
    //cout.sync_with_stdio(false);
    cin>>t;
    gc=0;
    while(t-->0)
    {
        cin>>n>>k;
        cout<<n<<"yhdga"<<k<<"hi";
        gc=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];

            if(a[i]%k==0)
            {
                cout<<gc<<"fdghj";
                if((a[i]/k)>gc)
                {
                    max1=  (a[i]/k);
                    min1=gc;
                }
                else
                    {
                    min1=  (a[i]/k);
                    max1=gc;

                }
                if(gc==0)
                {
                    cout<<a[i]<<"qwer"<<k;
                    gc=a[i]/k;
                    cout<<"not"<<gc;
                }
                else
                {
                    gc=gcd(max1,min1);
                    cout<<"yup";
                }

                cout<<gc<" ";
                cout<<max1;
                cout<<" ";
                cout<<min1;
                cout<<"\n  ";
                if(gc==1)
                    break;

            }
        }
        if(gc==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        fflush(stdin);

    }
    return 0;
}



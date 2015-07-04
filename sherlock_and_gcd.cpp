#include<iostream>
using namespace std;

int high,F;
bool a[100];
void subset(int A[],int low)
{
    if(F)
    {
        if(low>high )
        {
            int i,g=0,flag=1;
            for(i=0;i<=high;i++)
            {
                if(a[i])
                {
                    if(flag==1)
                    {
                        g=A[i];
                        flag=0;
                    }
                    else
                    {
                        if(g>A[i])
                            g=gcd(A[i],g);
                        else
                            g=gcd(g,A[i]);
                    }
                    if(g==1)
                    {
                        break;
                        F=0;
                    }

                }
            }
            if(F==0)
                cout<<"YES\n";
        //cout<<"NO
        }
        else
        {
        a[low]=true;
        if(F)
            subset(A,low+1);
        a[low]=false;
        if(F)
            subset(A,low+1);

        }
    }

}
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int A[n];
        for(i=0;i<n;i++)
        {
            cin>>A[i];
        }
        high=n-1;
        F=1;
        subset(A,0);
        //cout<<"hello";
        if(F)
            cout<<"NO\n";
    }
    return 0;
}

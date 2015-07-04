#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    long n,x=0,q,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        x=0;
        if(n%2)
        {
            for(i=0;i<n;i++)
            {
                cin>>q;
                if(i%2)
                {
                    x=x^q;

                }
            }
        }

        cout<<x<<"\n";
    }
    return 0;
}

#include<iostream>
#include<math.h>
//using ios_base::sync_with_stdio(false);

using namespace std;

int main()
{
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);
    int K,N,Q,sum,L=0;
    cin>>N;
    int i,a[N];
    for(i=0;i<N;i++)
        cin>>a[i];
    cin>>Q;
    while(Q-->0)
    {
        cin>>K;
        sum=0;
        L=0;
        for(i=0;i<N;i++)
        {
            if(a[i]%K==0)
            {
                L++;
                sum+=L;

            }
            else
            {
                L=0;
            }
            //cout<<K<<" "<<a[i]<<" "<<L<<"  "<<sum<<"\n";

        }
        cout<<sum<<"\n";
    }

    return 0;
}

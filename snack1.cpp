#include <iostream>

using namespace std;

int main()
{
    int t, n, i, j, s, m;
    cin>>t;
    while(t--)
    {
        s=m=0;
        cin>>n;
        int c[n+1], a[n+1];
        for(i=1; i<=n; i++)
        {
            a[i]=-1;
            cin>>c[i];
            s+=c[i];
            if(c[i]>m)
                m=c[i];
        }
        if(s!=n || m>(n-1))
        {
            cout<<-1<<endl;
            continue;
        }


            for(int i=1;i<=n;i++)
            {
                if(c[i]>0)
                    j=(i+1);
                while(c[i]>0)
                {
                    if(a[j]==-1)
                    {
                        a[j]=i;
                        c[i]--;
                    }
                    j++;
                    if(j>n)
                        j=1;

                }

            }
            for(int i=1;i<n;i++)
                cout<<a[i]<<" ";


        cout<<a[n]<<endl;
    }
    return 0;
}

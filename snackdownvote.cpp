#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,s,c[51],flag,a[51],j;
    scanf("%d",&t);

    while(t-->0)
    {
        flag=1;
        s=0;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            cout<<n<<" "<<i<<endl;
            cin>>c[i];
            s+=c[i];
            if(c[i]>=n)
                flag=0;
            a[i]=-1;
            cout<<"fcghjbkl";
        }
        if(s!=n)
            flag=0;
        cout<<"gsjfkd";
        if(flag==1)
        {

            for(int i=1;i<=n;i++)
            {
                if(c[i]>0)
                j=(i+1)%n;
                while(c[i]>0)
                {
                    if(a[j]==-1)
                    {
                        a[j]=i;
                        c[i]--;
                    }
                    j=(j+1)%n;

                }

            }
            for(int i=1;i<=n;i++)
                cout<<a[i];


        }
        else
            cout<<"-1\n";
    }
    return 0;
}

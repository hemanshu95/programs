#include<iostream>
using namespace std;
int main()
{
    int f,t,x,y,n,k,c,p,d;
    cin>>t;
    while(t-->0)
    {
        f=0;
        cin>>x>>y>>k>>n;
        d=x-y;
        while(n-->0)
        {
            cin>>p>>c;
            if(c<=k && p>=d)
                f=1;
        }
        if (f)
            cout<<"LuckyChef\n";
        else
            cout<<"UnluckyChef\n";

    }
    return 0;
}

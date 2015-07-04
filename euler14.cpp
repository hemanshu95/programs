#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,t=0,x,k=0,k1;
    for (i=1;i<1000001;i++)
    {
        x=i;
        k1=0;
        while(x!=1)
        {
            if (x%2)
                x=3*x+1;
            else
                x=x/2;
            k1++;
        }
        if(k1>k)
        {
             k=k1;
             t=i;
        }

    }
    cout<<t;
    cin>>i;

}


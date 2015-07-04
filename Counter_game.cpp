#include<iostream>
using namespace std;
int check(unsigned long long int n)
{
    unsigned long long x=n,p;
    int k=0;
    while(n>1)
    {
        p=1;
        x=n;
        while(x>1)
        {
            x/=2;
            p*=2;
        }
        n-=p;
        k++;
    }
    return k;
}
int main()
{
    int t,q,flag;
    cin>>t;
    unsigned long long int n,x,p=1;
    while(t--)
    {
        cin>>n;
        x=n;
        q=0;
        p=1;
        flag=1;
        q=check(n);

        //while(x)
        //{
          //  if(x%2 && x!=1)
            //    flag=0;
           // x/=2;
           // q++;
           // p*=2;

        //}
   //     if(flag==0)
     //       q++;
        if(q%2==0)
            cout<<"Richard";
        else
            cout<<"Louise";
        cout<<"\n";

        //if(p==n)
            //q--;


       // cout<<p<<" "<<q;
        //if(q%2)
          //  cout<<"Richard\n";
   //     else
     //       cout<<"Louise\n";
    }
    return 0;
}

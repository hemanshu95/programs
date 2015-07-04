#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<vector>
#include<queue>
#include<stack>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,a,s=0,last,toplh,nd=0,lp;
    cin>>n;
    n--;
    cin>>last;
    s=1;
    lh=1;
    lp=n;
    top=1;
    if(n>0)
    while(n--)
    {
        cin>>a;
        if(a>last)
        {
            lh++;
            s+=lh;
            nd=0;
            lp=n;
            top=lh;
        }
        else if(a==last)
        {
            lh=1;
            s+=lh;
            nd=0;
            lp=n;
            top=1;
        }
        else
        {
            nd++;
            lh=1;
            if(nd>=top)
            {
                s+=(lp-n+1);

            }
            else
            {
                s+=(lp-n);

            }
        }
        last=a;
        cout<<nd<<" "<<""<<s<<endl;
    }
    cout<<s;
    return 0;
}

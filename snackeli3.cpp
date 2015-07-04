#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<vector>
#include<queue>
#include<stack>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    string s;
    int q,i,j,x,y,k,l,m,n,flag;
    cin>>s;
    cin>>q;
    while(q--)
    {
        cin>>i>>j>>k>>l;
        i--;j--;k--;l--;
        flag=0;
        for(x=k,y=l;x<y;x++,y--)
        {
            if(x>=i &&x<=j)
                m=j-(x-i);
            else
                m=x;
            if(y>=i &&y<=j)
                n=j-(y-i);
            else
                n=y;
            if(s[m]!=s[n])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}

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
    long long t,flag, i, ans,x;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        ans=0;
        x=0;
        flag=0;
        if(s.size()>1)
        {for(i=0; i<s.size(); i++)
        {
            ans+=(s[i]-'0');
            ans%=9;
            x+=(s[i]-'0')%9;

            if((s[i]-'0')==9)
                flag=1;
        }
        if(x>4)
        {
            if(ans<5)
                cout<<ans<<endl;
            else
                cout<<9-ans<<endl;
        }
        else
        {
            if(s[0]=='0' || s[0]=='9' )
                cout<<ans<<endl;
            else if(flag==1)
                cout<<ans<<endl;
            else
                cout<<9-ans<<endl;
        }
        }
        else
        {
            if(s[0]-'0'<5)
                cout<<s[0]<<endl;
            else
                cout<<9-(s[0]-'0')<<endl;

        }
    }

    return 0;
}

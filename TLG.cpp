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
    int t,m=0,n=0,max1=0,flag=0,s1=0,s2=0;
    cin>>t;
    while(t-->0)
    {
        //flag=0;
        cin>>s1>>s2;
        m+=s1;
        n+=s2;
        if(max1<abs(m-n))
        {
            if(m>n)
                flag=1;
            else
                flag=2;
            max1=abs(m-n);
        }

    }
    cout<<flag<<" "<<max1;
    return 0;
}

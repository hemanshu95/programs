#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<vector>
#include<queue>
#include<stack>
char c[1000001];

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,b[26];
    long long k=0,a1,a2;
    cin>>n;

    //scanf("%c",&c);
    for(int i=0;i<26;i++)
    {
        b[i]=0;
    }
    cin>>c;
    for(int i=0;i<n;i++)
    {
        //scanf("%c",&c);

        b[c[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(b[i]>1)
        {

            if(b[i]%2==0)
            {
                a1=b[i]/2;
                a2=b[i]-1;
            }
            else
            {
                a1=b[i];
                a2=(b[i]-1)/2;

            }
            k+=(a1*a2);
          //  cout<<b[i]<<":"<<k<<" ";
        }

    }
    cout<<k+n;
    return 0;
}

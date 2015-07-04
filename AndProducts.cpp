#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<vector>
#include<queue>
#include<stack>
#include<bitset>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    unsigned long a[32],x,m,n;
    a[0]=1;
    for(int i=1;i<32;i++)
    {
        a[i]=a[i-1]<<1;
    }
    cin>>t;
    while(t-->0)
    {
        cin>>m>>n;
        x=0;
        bitset<32> first(m);
        bitset<32> second(n);
        bitset<32> answer;
        for(int i=31;i>=0;i--)
        {
            if(first[i]==second[i])
                answer[i]=first[i];
            else
                break;
        }
        cout<<answer.to_ulong()<<endl;
    }
    return 0;
}

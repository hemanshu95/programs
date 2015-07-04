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
    int n,a[100001],flag;
    while(1)
    {
        cin>>n;
        if(n==0)
        break;
        flag=1;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<=n;i++)
        {
            if(a[a[i]]!=i)
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
            cout<<"not ambiguous\n";
        else
            cout<<"ambiguous\n";

    }
    return 0;
}

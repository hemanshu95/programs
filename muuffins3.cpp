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
    int t,n;
    cin>>t;
    while(t-->0)
    {
        cin>>n;
        cout<<(n/2)+1<<endl;
    }
    return 0;
}

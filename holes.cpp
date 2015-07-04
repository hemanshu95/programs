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
    char a[101];
    int t,n;
    cin>>t;
    while(t-->0)
    {
        cin>>a;
        n=0;
        for(int i=0;a[i]!='\0';i++)
        {
            if(a[i]=='A'||a[i]=='D'|| a[i]=='O'|| a[i]=='P'|| a[i]=='R'||a[i]=='Q')
                n++;
            else if(a[i]=='B')
                n+=2;
        }
        cout<<n<<endl;
    }

    return 0;
}

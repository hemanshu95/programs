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
   // ios_base::sync_with_stdio(false);
    int t,o,z;
    char x;
    cin>>t;
    while(t-->0)
    {
        o=0;
        z=0;
        scanf("%c",&x);
        scanf("%c",&x);

        while(x!='\n')
        {
            if(x=='1')
                o++;
            else
                z++;
            scanf("%c",&x);


        }
        if(o>z)
            cout<<"WIN\n";
        else
            cout<<"LOSE\n";

    }
    return 0;
}

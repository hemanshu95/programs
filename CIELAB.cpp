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
    int a,b;
    cin>>a>>b;
    a=a-b;
    if(a%10<9)
        a++;
    else
        a--;
    cout<<a;
    return 0;
}

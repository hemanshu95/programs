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
    int k=0;
    ios_base::sync_with_stdio(false);
    for(int i=0;i<100000;i++)
    {
        for(int j=0;j<100000;j++)
        {
            k++;
        }
    }
    cout<<k;
    return 0;
}

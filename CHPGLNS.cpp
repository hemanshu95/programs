#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
class point
{
    public:
    int x;
    int y;
}
int islinesegmentabove(point P1,point P2,point P)
{
    if((P2.x>P.x && P2.x<P.x )|| (P2.x<P.x && P2.x>P.x ))
    {
        int val = (P.y - P1.y) * (P2.x - P.x) -
            (P.x - P1.x) * (P2.y - P.y);

        if (val == 0) return 0;  // colinear
            return (val > 0)? 1: 2; // clock or counterclock wise

    }
    return 0;
}
int *t[100000];

int main()
{
    ios_base::sync_with_stdio(false);
    int t,n;
    cin>>t;
    while(t-->0)
    {
        cin>>n;
        int

    }
    return 0;
}

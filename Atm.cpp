#include <iostream>
#include <iomanip>
//#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    float y;
    cin>>x>>y;
    if(x%5==0 && (float)x+0.5<=y)
        cout<<ios::fixed<<setprecision(2)<<y-0.5-(float)x;
    else
        cout<<ios::fixed<<setprecision(2)<<y;

    return 0;
}

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
    long long n,p,x,max1,i=0,id;
    cin>>n>>p>>x;
    long long a[n];
    cin>>a[0];
    id=0;
    max1=a[0]*p;
    i++;
    while(i<n){
        p-=x;
        cin>>a[i];

        if(a[i]*p>max1){
            max1=a[i]*p;
            id=i;

        }
        i++;
    }
    cout<<id+1;
    return 0;
}

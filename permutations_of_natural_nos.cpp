#include<bits/stdc++.h>
using namespace std;
char a[100000];
int main()
{
    int l,i,min1;
    scanf("%s",a);
    l=strlen(a);
    int arr[l+1];
    min1=1;
    for(i=l;i>=0;i--)
    {
        if(a[i]=='D')
        {
            arr[i+1]=min1;
            min1++;
        }

    }
    arr[0]=min1;
    min1++;
    for(i=0;i<l;i++)
    {
        if(a[i]=='I')
        {
            arr[i+1]=min1;
            min1++;
        }

    }
    for(i=0;i<l+1;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

#include<stdio.h>
#include<iostream>
using namespace std;
bool a[10]={false};
int printi(int A[],int low,int high)
{
    int i;
    if(low>high)
    {
        for(i=0;i<=high;i++)
        {
            if(a[i]==true)
                cout<<A[i]<<" ";
        }
        cout<<"\n";
    }
    else
    {
        a[low]=true;
        printi(A,low+1,high);
        a[low]=false;
        printi(A,low+1,high);
    }
    return 0;
}
int main()
{
    int A[3],i;
    for(i=0;i<3;i++)
    {
        cin>>A[i];
    }
    printi(A,0,2);
    return 0;
}

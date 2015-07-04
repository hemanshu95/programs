#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int A[100];
int part(int first,int last)
{
    swap(A[(first+last)/2],A[first]);
    int pivot=A[first];
    int smallindex=first;

    for( int i=first+1 ; i<=last ; i++)
    {
        if(A[i]<pivot)
        {
            smallindex++;
            swap(A[smallindex],A[i]);
        }

    }
    swap(A[first],A[smallindex]);
    return smallindex;
}
void quicksort(int first ,int last)
{
    if(first<last)
    {
        int pivot = part(first,last);
        quicksort(first,pivot-1);
        quicksort(pivot+1,last);

    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];

    }
    quicksort(0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";

    }
    return 0;
}

#include<stdio.h>
#include<
bool a[10]={false};
int print(int A[],int low,int high)
{
    if(low>high)
    {
        for(i=0;i<=high;i++)
        {
            if(a[i]==true)
                print(A[i]);
        }
    }
    else
    {
        a[i]=true;
        print(A,low+1,high);
        a[i]=false;
        print(A,low+1,high);
    }
    return 0;
}
int main()
{
    int A[10];
    for(i=0;i<10;i++)
    {
        cin>>A[10];
    }
    print(A,0,9);
    return 0;
}

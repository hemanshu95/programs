#include<algorithm>
#include<iostream>
using namespace std;
int sumup(int A[],int size1,int c)
{
    int B[size1-1],mina,i,min1,j;
    for(i=0;i<size1;i++)
    {
        B[i]=A[i+1]-A[i];
    }
    int t,k;
    while(c--)
    {


        mina=0;
        for(i=0;i<size1-1;i++)
        {
            t=B[i]+B[i+1];
            if(i==0)
                min1=B[2];
            else
                min1=B[0];
            for(j=0;j<size1;j++)
            {
                if(j==i)
                {
                    j++;
                }
                else
                {
                    if(min1>B[j])
                        min1=B[j];
                }
            }
            if(t<min1)
                min1=t;
            if(min1>mina)
            {
                mina=min1;
                k=i;
            }

        }
        B[k]+=B[k+1];
        k++;
        for(;k<size1-1;k++)
            B[k]=B[k+1];
        size1--;
    }
    return mina;
}
int main()
{
    int n,c,i;
    cin>>n>>c;
    int A[n];
    for(i=0;i<n;i++)
        cin>>A[i];
    sort(A,A+n);
    cout<<sumup(A,n,n-c);
    return 0;
}

#include<algorithm>
#include<iostream>
using namespace std;
int sumup(int A[],int size1,int c)
{
    int B[size1-1],mina,i,min1,j,size2=size1-1;
    for(i=0;i<size1;i++)
    {
        B[i]=A[i+1]-A[i];
    }
    int k;
    while(c--)
    {



        mina=0;
        for(i=0;i<size2-1;i++)
        {
               min1= B[i]+B[i+1];
            for(j=0;j<size2;j++)
            {
                if(j==i)
                {
                    j++;
                    continue;
                }
                if(min1>B[j])
                    min1=B[j];

            }
            if(min1>mina)
            {
                mina=min1;
                k=i;
            }

        }
        //cout<<"\n"<<min1<<" "<<k<<"\n";
        B[k]+=B[k+1];
        k++;
        for(;k<size2-1;k++)
            B[k]=B[k+1];
        size2--;
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

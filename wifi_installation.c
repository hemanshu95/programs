#include<stdio.h>
void sumup(int A[],int size,int c)
{

    int B[size-1],mina,i,min,j;
    for(i=0;i<size;i++)
    {
        B[i]=A[i+1]-A[i];
    }
    int t,k;
    while(c--)
    {


        mina=0;
        for(i=0;i<size-1;i++)
        {
            t=B[i]+B[i+1];
            if(i==0)
                min=B[2];
            else
                min=B[0];
            for(j=0;j<size;j++)
            {
                if(j==i)
                {
                    j++;
                }
                else
                {
                    if(min>B[j])
                        min=B[j];
                }
            }
            if(t<min)
                min=t;
            if(min>mina)
            {
                mina=min;
                k=i;
            }

        }
        B[k]+=B[k+1];
        k++;
        for(;k<size-1;k++)
            B[k]=B[k+1];
        size--;
    }
    return mina;
}
int main()
{
    int n,c,i;
    scanf("%d%d",&n,&c);
    int A[n];
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    printf("%d\n",sumup(A,n,n-c));
    return 0;
}

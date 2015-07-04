#include<stdio.h>

int qsort1(int A[],int f,int l,int size)
{
    int n=l-f+1,temp;
    if(n<2)
        return 0;
    if(n==2 )
    {
        int i;
        if(A[f]>A[l])
        {
            temp=A[f];
            A[f]=A[l];
            A[l]=temp;
        }
        for(i=0;i<size;i++)
        {
            printf("%d ",A[i]);

        }
        printf("\n");
    }
    else
    {

        int i=f,pivot=A[l],j=i;
        for(;i<l;i++)
        {
            if(A[i]<=pivot)
            {

                temp=A[j];
            A[j]=A[i];
            A[i]=temp;
                j++;
            }
        }
        temp=A[j];
        A[j]=A[i];
        A[i]=temp;
        for(i=0;i<size;i++)
        {
            printf("%d ",A[i]);

        }
        printf("\n");

        qsort1(A,f,j-1,size);
        qsort1(A,j+1,l,size);

    }
    return 0;

}
int main()
{
    int n,i;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    qsort1(A,0,n-1,n);
    return 0;
}

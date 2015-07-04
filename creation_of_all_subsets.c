
#include<stdio.h>
#include<math.h>

int addone(int *b)
{
    int flag=1,k=0;

    do
    {
        if(*(b+k)==1)
        {

            *(b+k)=0;
            k++;
        }
        else
        {
            *(b+k)=1;
            flag=0;
        }

    }while(flag==1);
    return 0;
}
int main()
{
    int i,n,j;
    scanf("%d",&n);
    int a[n],b[1000]={};
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<pow(2,n);i++)
    {
        addone(b);
        for(j=0;j<n;j++)
        {
            //printf("%d ",b[j]);
            if(b[j]==1)
                printf("%d ",a[j]);
        }
        printf("\n");
    }
    return 0;
}

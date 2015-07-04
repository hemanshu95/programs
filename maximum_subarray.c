#include<stdio.h>
#define MAX(a,b) a>b?a:b
int max_sub(int a[],int i)
{
    if(i==-1)
        return 0;


    return MAX(max_sub(a,i-1)+a[i],a[i]);

}
int main()
{
    int t,n,i,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n];
        k=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>0)
                k+=a[i];
        }
        printf("%d %d\n",max_sub(a,n-1),k);
    }
}

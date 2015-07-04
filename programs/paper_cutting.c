#include<stdio.h>
int hcf(int n,int m)
{
    int min,i;
    if(n>m)
        min=m;
    else if(n<m)
        min=n;
    else
        return n;
    for(i=min;i>0;i--)
    {
        if(m%i==0 && n%i==0)
            return i;
    }
    return 0;

}
int main()
{
    int n,m,h,t,i;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&n,&m);
        h=hcf(n,m);
        a[i]=(n*m)/(h*h);
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",a[i]);
    }
     return 0;

}

#include<stdio.h>
int main()
{
    int n,m,t,i;
    scanf("%d",&t);
    int s[t];
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&n,&m);
        s[i]=0;
        while ( n>0 && m>0)
        {
            if(n>m)
            {
                s[i]=s[i]+(n/m);
                n=n%m;
            }
            else
            if(n<m)
            {
                s[i]=s[i]+(m/n);
                m=m%n;
            }
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",s[i]);
    }
return 0;
}

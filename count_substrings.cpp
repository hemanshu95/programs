#include<bits/stdc++.h>
using namespace std;
bool a[100001];
int fs1[100001],fl1[100001],x,as;
int main()
{
    int t,n,k,q,i,j,l,r,x1,x0,z;
    scanf("%d",&t);
    while(t-->0)
    {
        scanf("%d%d%d",&n,&k,&q);
        scanf("%c",&as);
        for(i=0;i<n;i++)
        {
            scanf("%c",&as);
            if (as=='1')
                a[i]=true;
            else
                a[i]=false;
        }
        scanf("%c",&as);
        fs1[0]=0;
        fl1[n+1]=0;
        for(i=1,j=n;i<=n;i++,j--)
        {
            if (a[i-1])
                fs1[i]=fs1[i-1]+1;
            else
                fs1[i]=fs1[i-1];
            if (a[j-1])
                fl1[j]=fl1[j+1]+1;
            else
                fl1[j]=fl1[j+1];


        }
        while(q-->0)
        {


            z=0;
            scanf("%d%d",&l,&r);
            for(i=l;i<=r;i++)
            {
                x1=fs1[n]-fs1[i-1];
                x0=(n-fs1[n])-((i-1)-fs1[i-1]);
                //printf("%d %d       ",x1,x0);
                x=i+k-1;
                if(x>r)
                    z+=(rC2)
                for(j=x;j<=r;j++)
                {
                    //printf("%d %d %d %d \n ",x1-fl1[j+1],x0-(n-(j)-fl1[j+1]),fl1[j+1],j);
                    if(x1-fl1[j+1]>k || x0-(n-(j)-fl1[j+1])>k )
                        break;
                    else
                        z++;

                }
            }
            printf("%d\n",z);
        }
    }
    return 0;
}

#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int a[100000],b[100000];
int main()
{
    int t,mina,maxa,n;
    scanf("%d",&t);
    while(t-->0)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        mina=0;
        maxa=0;
        for(int i=0;i<n;i++)
        {
            b[i]=a[i];
        }
        int i;
        for( i=0;i<n-1;i++)
        {
            if(b[i]!=-1)
            {
                maxa++;
                if(b[i+1]==(b[i]+1))
                    b[i+1]=-1;

            }
            if(a[i]!=-1)
            {
                mina++;
                if(a[i+1]==(a[i]+1))
                {
                    if(i+2<n && a[i+2]==(a[i+1]+1))
                        a[i+2]=-1;
                    a[i+1]=-1;

                }
            }
        }
        if(b[i]!=-1)
            maxa++;
        if(a[i]!=-1)
            mina++;
        cout<<mina<<" "<<maxa<<endl;
    }
    return 0;
}

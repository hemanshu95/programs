#include<bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
int main()
{
    int N,i;
    sd(N);
    int A[N],B[N],maxa=0,maxt,mint,mina,c,d,swap1;
    for(i=0;i<N;i++)
    {
        scanf("%d%d",&A[i],&B[i]);
    }
    for (c = 0 ; c < ( N - 1 ); c++)
    {
        for (d = 0 ; d < N - c - 1; d++)
        {
            if (A[d] > A[d+1]) /* For decreasing order use < */
            {
                swap(A[d],A[d+1]);
                swap(B[d],B[d+1]);
            }
        }
    }
    mint=A[0];
    maxt=B[0];
    if(N==1)
    {
        printf("%d %d",B[0]-A[0],0);
    }
    else
    {
        i=1;
        mina=B[N-1];
        while(i<N)
        {
            if(A[i]<=maxt)
            {
                if(B[i]>maxt)
                    maxt=B[i];
                if ( maxa<maxt-mint)
                    maxa=maxt-mint;
            }
            else
            {
                if(mina<A[i]-maxt)
                    mina=A[i]-maxt;
                mint=A[i];
                maxt=B[i];
                if ( maxa<maxt-mint)
                    maxa=maxt-mint;
            }
            i++;
        }
        printf("%d %d",maxa,mina);
    }
    return 0;
}

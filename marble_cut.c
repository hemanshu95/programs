#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,n,ar;
    scanf("%d",&t);
    while(t-->0)
    {
        scanf("%d%d",&m,&n);
        if (m%3==0 || n%3==0)
            printf("YES\n");
        else if (m%3==1 && n%3==1)
            printf("NO 1\n");
        else if (m%3==2 && n%3==1 )
            printf("NO 2\n");
        else if (m%3==1 && n%3==2)
            printf("NO 2\n");
        else if (m%3==2 && n%3==2)
            printf("NO 4\n");
    }
    return 0;
}

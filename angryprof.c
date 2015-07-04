#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,n,k,i,x;
    scanf("%d",&t);
    while(t--)
    {
        x=0;
        scanf("%d%d",&n,&k);
        while(n--)
        {
            scanf("%d",&i);
            if(i>0)
                x++;
        }
        if(x<k)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

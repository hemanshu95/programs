#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,i;
    long l;
    scanf("%d %ld",&n,&l);
    long a[n];
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);

    }
    sort(a,a+n);
    long max=0;
    for(i=0;i<n-1;i++)
    {
        if(max<a[i+1]-a[i])
            max=a[i+1]-a[i];

    }
    float m=(float)max/2f;
    if(a[0]>m)
        m=(float)a[0];
    if(a[n-1]-a[n-2]>m)
        m=(float))(a[n-1]-a[n-2]);
    printf("%f",m);
    return 0;
}

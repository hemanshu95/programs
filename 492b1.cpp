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
    long max1=0;
    for(i=0;i<n-1;i++)
    {
        if(max1<a[i+1]-a[i])
            max1=a[i+1]-a[i];

    }
    float m=(float)max1/(float)2;
    if(a[0]>m)
        m=(float)a[0];
    if(l-a[n-1]>m)
        m=(float)(l-a[n-1]);
    printf("%f",m);
    return 0;
}

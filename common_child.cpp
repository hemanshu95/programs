#include<stdio.h>
#include<iostream>
#define MAX(a,b) a>b?a;flag=1:b;flag=0
using namespace std;
char a[5001],b[5001],flag=0;
int cc(int x,int y)
{
    int ma,m,n;
    if(a[x]=='\0'||b[y]=='\0')
        return 0;
    if(a[x]==b[y])
    {
        ma=1+cc(x+1,y+1);

        if(flag==1)

    }
    else
        ma=MAX(cc(x,y+1,m),cc(x+1,y,n));
    return ma;

}

int main()
{

    cin>>a;
    cin>>b;
    printf("%d",cc(0,0));
    return 0;
}

#include<stdio.h>
struct n
{
    long long t;
    struct n *next;
};
int main()
{
    int n,i;
    long long l;
    scanf("%d %I64d",&n,&l);
    struct n *start, *end;
    start= new n;
    start->t=0;
    start->next=nullptr;
    end=start;
    for(i=0;i<n;i++)
    {

    }
}

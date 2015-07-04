#include<stdio.h>
#include<iostream>
using namespace std;
struct node
{
    long long t;
    node *next;
};
int main()
{
    int n,i,o;
    long long l,temp,max1=0;
    scanf("%d %I64d",&n,&l);
    node *start, *end1,*np,*np1,*ptr;
    start = new node;
    start->t=0;
    start->next=NULL;
    scanf("%I64d",&temp);
    np=new node;
    np->t=temp;
    end1=new node;
    np->next=end1;
    end1->t=l;
    end1->next=NULL;
    start->next=np;
    np1=start;
    for(i=1;i<n;i++)
    {
        ptr=new node;
        scanf("%I64d",&ptr->t);
        np=start;
        while(np)
        {
            if(ptr->t<=(np->t))
            {
                np1->next=ptr;
                ptr->next=np;
                break;
            }
            np1=np;
            np=np->next;
        }
    }
    np=start;
    while(np!=end1)
    {
        if((np->next->t-np->t)>max1)
            max1=(np->next->t-np->t);
        np=np->next;
    }
    double m=(double)max1/(double)2;
    if(start->next->t-start->t > m)
        m=start->next->t-start->t;
    np=start;
    while(np->next!=end1)
    {
        np=np->next;
    }
    if(end1->t-np->t>m)
        m=end1->t-np->t;

    printf("%I64f",m);

}

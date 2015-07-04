#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
struct data
{
    int info;
    struct data* link;
};

struct data* dividelist(struct data* first)
{
    struct data* second;
    if(first==NULL)
    {
        second=NULL;
    }
    else if(first->link==NULL)
        second=NULL;
    else
    {
        data* middle=first;
        data* current=first->link;
        while(current!=NULL)
        {
            middle=middle->link;
            current=current->link;
            if(current!=NULL)
                current=current->link;
        }
        second=middle->link;
        middle->link=NULL;
    }
    return second;

}

struct data* mergelist(struct data* first,struct data* second)
{
    struct data *start,*l;
    if(first->info<second->info)
    {
        l=first;
        first=first->link;
        l->link=NULL;
    }
    else
    {
        l=second;
        second=second->link;
        l->link=NULL;
    }
    start=l;
    while(first!=NULL && second!=NULL)
    {
        if(first->info<second->info)
        {
            l->link=first;
            first=first->link;

        }
        else
        {
            l->link=second;
            second=second->link;
        }
        l=l->link;

    }
    if(first!=NULL)
        l->link=first;
    else
        l->link=second;

    return start;
}
struct data* mergesort(struct data* first)
{
    cout<<"hello";
    struct data* second;
    if(first!=NULL)
    {
        if(first->link!=NULL)
        {
            second=dividelist(first);
            mergesort(first);
            if(second!=NULL)
            {
                mergesort(second);

                first=mergelist(first,second);
            }
        }
    }
    cout<<"hi";
    return first;
}
int main()
{
    struct data *start=NULL,*last=NULL,*tmp;

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        tmp= new data;//(struct data *)malloc(sizeof(struct data));
        //tmp=new data;
        cin>>tmp->info;
        tmp->link=NULL;
        if(start==NULL)
        {
            start=tmp;
            last=tmp;
        }
        else
        {
            last->link=tmp;
            last=last->link;
        }
    }
    tmp=dividelist(start);
   // start=mergelist(start,tmp);
    //start=mergesort(start);
    //tmp=start;
    while(tmp!=NULL)
    {
        cout<<tmp->info<<" ";
        tmp=tmp->link;
    }
    return 0;
}

#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int b[26];
struct letter
{
    char let;
    int freq;
}a[26];
bool sort_by_freq( const letter & lhs, const letter & rhs )
{
   return lhs.freq > rhs.freq;
}
char order[100002];
int main()
{
    int t,n,flag=0,k,j,top,q;
    char c;
    scanf("%d",&t);
   letter a[26];

     while(t-->0)
    {

        c='a';
        flag=0;
        scanf("%s",order);

        //int a[26],b[26];
        n=0;
        for(int i=0;i<26;i++)
        {
            a[i].let=97+i;
            a[i].freq=0;
        }
        j=0;
        c=order[0];
        //printf("%d",c);
        while(c!='\0')
        {
            a[c-97].freq++;
            j++;
            c=order[j];
            //scanf("%c",c);
        }
       // cout<<j;
       n=j;
        for(int i=0;i<n;i++)
            order[i]=0;
        k=0;
        k++;
        for(int i=0;i<26;i++)
        {
            if(a[i].freq>((n+(n%2))/2))
            {
                    flag=1;
               // cout<<a[i].freq<<" "<<((n+(n%2))/2)<<endl;
            }
            if(a[i].freq>0)
                k++;
            //b[i]=i;
        }
        if(flag==1)
        {
            cout<<-1<<endl;
            continue;
        }

        sort( a, a+25, sort_by_freq );
        j=0;
        top=0;
        int i=0;
        //cout<<"hello";
        q=top;
        while(n>0)
        {
            while(order[q]!=0)
                q++;
            order[q]=a[i].let;
            a[i].freq--;
            n--;

            if(a[i].freq==0)
                top++;
            if(a[i].freq<a[i+1].freq && i+1<k)
                i++;
            else if(i!=top)
            {
                i=top;
                q=0;

            }
            else
                q+=2;//i+=2;

        }/*for(int i=0;i<k;i++)
        {
            while(order[top])
            top++;
            j=top;


            order[j]=a[i].let;
          //      cout<<order[j];
            j+=2;


        }*/
        //cout<<"hei";
        for(int i=0;i<n;i++)
            cout<<order[i];
        cout<<endl;
    }
    return 0;
}

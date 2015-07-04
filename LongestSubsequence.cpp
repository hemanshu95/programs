#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<vector>
#include<queue>
#include<stack>
#include<utility>

using namespace std;
typedef pair<int,int> pi;


int main()
{
    ios_base::sync_with_stdio(false);
    vector<int> a;
    int k,n,w=1,max1,max2=0,flag=0,o=0;
    cin>>n;
    vector<pi> b;
    cin>>k;
    a.push_back(k);
    b.push_back(make_pair(1,k));
    cout<<"1 ";
    while(w<n)
    {
        cin>>k;
        a.push_back(k);
        max1=0;
        vector<pi>::iterator i;
        for(o=0,i=b.begin();o<w;i++,o++)
        {
            if((*i).second<k)
            {
                if(max1<(*i).first)
                    max1=(*i).first;
            }

        }

        b.push_back(make_pair(max1+1,k));
        cout<<max1+1<<" ";
        if(max2<(max1+1))
            max2=max1+1;
        w++;
    }
    cout<<max2<<endl;


    return 0;
}

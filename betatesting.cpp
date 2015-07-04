#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<vector>
#include<queue>
#include<stack>
#include<bitset>
#include<utility>
#include<limits.h>
#include<set>

#define v2d(a,n,m) vector< vector<int> > a(n,vector<int>(m,0))
#define v1d(a,n) vector<int> a(n,0)
#define ve(a) vector<int> a
#define v2e(a) vector< vector<int> > a
#define frl(i,n,m) for(int i=n;i<m;i++)
#define frl1(i,n,m) for(int i=n;i<=m;i++)

using namespace std;
typedef pair<string,int> psi;
typedef pair<int,int> pi;
int main()
{
    ios_base::sync_with_stdio(false);
    set< psi > se;
    //set< pair<string,int> > s;
    /*s.insert({"hello",1});
    s.insert({"y",2});
    if("hello"=="hello")
    cout<<"pol";
    if((s.lower_bound({"hello",-1})->first).compare("hello")==0 )
        cout<<"hi";
    */

    int n;
    cin>>n;
    string x;
    cin>>x;
    se.insert({x,1});
    frl(i,1,n)
    {
        cin>>x;
        int m=1;
        auto tmp=se.lower_bound({x,-1});
       // cout<<tmp->first<<" "<<tmp->second<<" "<<x<<endl;
        //->first).compare(x)==0 )
        if(tmp->first.compare(x)==0)
        {   m+=tmp->second;
            se.erase(tmp);
        }
        se.insert({x,m});

    }
   // for (set<int>::iterator tmp=se.rend(); tmp!=se.rbegin(); --tmp)
     //   cout<<tmp->first<<" "<<tmp->second<<endl;
    //std::cout << ' ' << *it;
    //int k=se.size();
    //for (auto it=se.rbegin(); it!=se.rend(); ++it)
   // cout << it->first<<" "<<it->second<<endl;
    while(!se.empty())
    {
        auto tmp=se.end();
        tmp--;
        cout<<tmp->first<<" "<<tmp->second<<endl;
        se.erase(tmp);
    }
    return 0;
}

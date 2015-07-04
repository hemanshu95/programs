#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<vector>
#include<queue>
#include<stack>
#include<bitset>

using namespace std;
void functionC()
{
  priority_queue <int, vector<int>, greater<int> > pq;   //pq is a priority queue of integers that uses
                                                         //a vector of integers for storage and uses >
                                                         //to determine priority. This means that if a > b,
                                                         //a has *lower* priority than b.

  pq.push(2);                      //put 2, 5, 3, 2 into the queue
  pq.push(5);
  pq.push(3);
  pq.push(1);
  cout<<"pq contains " << pq.size() << " elements.\n";

  while (!pq.empty()) {
    cout << pq.top() << endl;      //print out the highest priority element in the queue
    pq.pop();                      //remove the highest priority element
  }
}
long long next(long long n)
{
    int i=0;
    while(n%10!=4 && n!=0)
    {
        i++;
        n/=10;
    }
    if(n==0)
    {
        n=4;
      //  sz++;
    }
    else
    n+=3;

    while(i--)
    {
        n*=10;
        n+=4;
    }
    return n;

}
int main()
{
    ios_base::sync_with_stdio(false);
    bitset<10> f(-10);
    f[0]=0;
    //cout<<f<<endl<<f.count()<<f.to_ulong();
    //functionC();//1(0)->4,2(1)->4,4(2)->4,8(3)->744,16(4)->7744,32(5)->7744,64(6)->7744,128(7)->47744,256(8)->447744,512(9)->4447744,1024(10)->44447744,

    long long n=1,m=0;
    while(n<1000000000)
    {
        n*=5;
        m++;
    }
    int l=pow(2,13);
    cout<<endl<<l<<endl;
    long long n1=4,sz=0,addpos;
    long long x=1;
    int    i=0;
    while(i<=14)
    {
        if(n1%x==0)
        {
            cout<<x<<" "<<n1<<endl;
            x*=2;
            i++;
        }
        else
        {
            n1=next(n1);
        }


    }

    cout<<n<<" "<<m;
    while(1)
    {
        cin>>n;
        cout<<n%1024<<endl;
    }
    return 0;
}

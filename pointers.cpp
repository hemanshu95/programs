#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int hello(int,int);
class pointerDataClass
{
    private:
        int lenP;
        int *p;

    public:
            int x;

       // const pointerDataClass& operator=(const pointerDataClass&);
        pointerDataClass& operator=(pointerDataClass& rightObject)
        {
//local declaration, if any
            if (this != &rightObject) //avoids self-assignment
            {

//algorithm to copy rightObject into this object
                cout<<rightObject.x++<<" ";
            }
           // cout<<"fchgjk";
//returns the object assigned
            return *this;
        }

};
int operator+(pointerDataClass& a,pointerDataClass& b)
{
   // return 1;
    return a.x*b.x;
}
int hello(int a,int b)
{
    return a+b;

}
int main()
{
   /* string *str;
    str=new string;
    *str="Sunny  fhsdj";
    cout<<(*str).length();

    */
    /*int *p=new int[10];
    p[0]=1;
    p[1]=4;
    cout<<p[0];
    //cout<<sizeof(long);
    */

    /*pointerDataClass h1,h2,h3;
    h2=h1;
    cout<<h2.x<<"hellohvbjn";
    h3=h1;
    cout<<h3.x<<"hello";
*/
   /* int i=0;
    int y=1;
    int& const icr=i;
    icr=y;          // Can change the object it is pointing to so it's not like a const pointer...
    icr=99;         // Can assign another value but the value is not assigned to y...
    int x=9;
    icr=x;
    cout<<"icr: "<<icr<<", y:"<<y<<endl;
    */
    //pointerDataClass z,y;
    //z.x=1;
    //y.x=2;
    //cout<<z+y;
    cout<<hello(1,2);
    return 0;
}

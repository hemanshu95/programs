#include<iostream>
#include<stdio.h>
#include<algorithm>
#include "arrayListType.h"
#include<math.h>
using namespace std;

class polynomialType:public arrayListType<double>
{
    friend ostream& operator<<(ostream& , polynomialType&);
    //Overloads the stream insertion operator
    friend istream& operator>>(istream&, polynomialType&);
    //Overloads the stream extraction operator

    public:
    polynomialType operator+(const polynomialType&);
    //Overloads the operator +
    polynomialType operator-(const polynomialType&);
    //Overloads the operator -
    polynomialType operator*(const polynomialType&);
    //Overloads the operator *
    double operator() (double x);
    //Overloads the operator () to evaluate the polynomial at
    //a given point
    //Postcondition: The value of the polynomial at x is
    //calculated and returned

    polynomialType(int size);
    //constructor
 //   int min(int x, int y) const;
    //Function to return the smaller of x and y
  //  int max(int x, int y) const;
    //Function to return the larger of x and y
    private:
    int degree;

};

polynomialType::polynomialType(int size=100):arrayListType<double>(size)
{
    cout<<"hello"<<size;
    length=size;
    for (int i = 0; i < size; i++)
        list[i] = 0;
    degree=size-1;
}


double polynomialType::operator()(double x)
{
    double y=0.0;
    for (int i = 0; i < listSize(); i++)
        y+=pow(x,i)*list[i];
    return y;
}

polynomialType polynomialType::operator+(const polynomialType& right)
{
    polynomialType sum(max(listSize(),right.listSize()));
    int i = 0;
    for (; i < min(listSize(),right.listSize()); i++)
        sum.list[i]=list[i]+right.list[i];
    if(listSize()>right.listSize())
        for(;i<max(listSize(),right.listSize());i++)
        {
            sum.list[i]=list[i];
        }
    else
        for(;i<max(listSize(),right.listSize());i++)
        {
            sum.list[i]=right.list[i];
        }
    return sum;
}


polynomialType polynomialType::operator-(const polynomialType& right)
{
    polynomialType diff(max(listSize(),right.listSize()));
    int i = 0;
    for (; i < min(listSize(),right.listSize()); i++)
        diff.list[i]=list[i]-right.list[i];
    if(listSize()>right.listSize())
        for(;i<max(listSize(),right.listSize());i++)
        {
            diff.list[i]=list[i];
        }
    else
        for(;i<max(listSize(),right.listSize());i++)
        {
            diff.list[i]=-right.list[i];
        }
    return diff;
}

polynomialType polynomialType::operator*(const polynomialType& right)
{
    polynomialType mul(listSize()+right.listSize()-1);
    int j = 0;
    for(int i=0;i<listSize()+right.listSize()-1;i++)
    {
        if(listSize()<i)
            j=listSize();
        else
            j=i;
        for(;j>=0;j--)
        {
            if(i-j<right.listSize())
                mul.list[i]+=(list[j]*right.list[i-j]);
        }
    }
    return mul;
}

ostream& operator<<(ostream& os, polynomialType& p)
{
    int indexFirstNonzeroCoeff = 0;
    for (int i = 0; i < p.listSize(); i++) //determine the index of the//first nonzero coefficient
        if (p.list[i] != 0.0)
        {
            indexFirstNonzeroCoeff = i;
            break;
        }
    if (indexFirstNonzeroCoeff < p.length)
    {
        if (indexFirstNonzeroCoeff == 0)
            os << p.list[indexFirstNonzeroCoeff] << " ";
        else
            os << p.list[indexFirstNonzeroCoeff] << "x^"<< indexFirstNonzeroCoeff << " ";
        for (int i = indexFirstNonzeroCoeff + 1; i < p.length; i++)
        {

            if (p.list[i] >= 0.0)
                os << "+ " << p.list[i] << "x^" << i << " ";
            else
                os << "- " << -p.list[i] << "x^" << i << " ";
        }
    }
    else
        os << "0";
    return os;
}

istream& operator>>(istream& is, polynomialType& p)
{
    cout << "The degree of this polynomial is: "<< p.length - 1 << endl;
    for (int i = 0; i < p.length; i++)
    {
        cout << "Enter the coefficient of x^" << i << ": ";
        cin >> p.list[i];
    }
    return is;
}
int main()
{
    polynomialType p(8);
    polynomialType q(4);
    polynomialType t;
    cout<<p.listSize();
    cin >> p;
    cout << endl << "Line 10: p(x): ";
    cout<< p ;
    cout<< endl;
//Line 9
//Line 10
    cout << "Line 11: p(5): " << p(5) << endl << endl; //Line 11
    cin >> q;
    cout << endl << "Line 13: q(x): " << q << endl<< endl;
//Line 12
//Line 13
    t = p + q; //Line 14
    cout << "Line 15: p(x) + q(x): " << t << endl; //Line 15
    t=p-q;
    cout << "Line 16: p(x) - q(x): " << t<< endl; //Line 16
    return 0;

}
//Line 17

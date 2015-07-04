//****************************************************************
// Author: D.S. Malik
//
// This program illustrates how to use the class arrayListType.
//****************************************************************
#include <iostream> //Line 1
#include <string>
#include "arrayListType.h" //Line 2

using namespace std; //Line 4
int main()
{
    arrayListType<int> intList(100);
    arrayListType<string> stringList; //Line
//Line
//Line
//Line

    int number; //Line 9
    cout << "List 10: Enter 5 integers: "; //Line 10
    for (int counter = 0; counter < 5; counter++)
    {
        cin >> number;
        intList.insertAt(counter, number);
    } //Line
//Line
//Line
//Line
//Line 11

    cout << endl;
    cout << "List 19: The list you entered is: ";
    intList.print();
    cout << endl; //Line
//Line
//Line
//Line 16

    cout << "Line 20: Enter the item to be deleted: ";
    cin >> number;
    intList.remove(number);
    cout << "Line 23: After removing " << number<< ", the list is:" << endl;
    intList.print();
    cout << endl; //Line 20
    //Line 21
//Line 22
    string str; //Line 26
    cout << "Line 27: Enter 5 strings: "; //Line 27
    for (int counter = 0; counter < 5; counter++)
    {
        cin >> str;
        stringList.insertAt(counter, str);
    } //Line
//Line
//Line
//Line
//Line
//Line 23
//Line 24

    cout << endl;
//Line 33
    cout << "Line 34: The list you entered is: " << endl; //Line 34
    stringList.print();
//Line 35
    cout << endl;
//Line 36
    cout << "Line 37: Enter the string to be deleted: ";
    cin >> str;
    stringList.remove(str);
    cout << "Line 40: After removing " << str<< ", the list is:" << endl;
//Line 37
//Line 38
//Line 39
//Line 40

    stringList.print();
    cout << endl; //Line 41
//Line 42
    return 0; //Line 43
//Line 44

}

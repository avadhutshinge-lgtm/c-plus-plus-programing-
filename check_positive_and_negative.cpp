#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number a=";
    cin>>a;
    if(a>0)
    {
    cout<<"number is positive";
    }
    else if(a<0)
    {
        cout<<"Number is negative";
    }
    else
    {
        cout<<"number is zero";
    }
    return 0;
}
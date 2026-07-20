#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the first number(a)=";
    cin>>a;
    cout<<"Enter the second number(b)=";
    cin>>b;
    if(a>b)
    {
        cout<<"'a'Is grater number";
    }
    else if(b>a)
    {
        cout<<"'b'Is grater number";
    }
    else
    {
        cout<<"both are equal numbers type 'different' values";
    }
    return 0;

}

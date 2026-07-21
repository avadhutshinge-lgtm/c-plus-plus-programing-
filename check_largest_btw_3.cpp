#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the first number(a)=";
    cin>>a;
    cout<<"Enter the second number(b)=";
    cin>>b;
    cout<<"Enter the third number(c)=";
    cin>>c;
    //Here we use Logical and operator
    if(a==b&&b==c)
    {
        cout<<"all equal numbers type 'different' values";
    }
    else if(a>=b&&a>=c)
    {
        cout<<"'a'Is grater number";
    }
    else if(b>=a&&b>=c)
    {
        cout<<"'b'Is grater number";
    }
    else if(c>=a&&c>=b)
    {
        cout<<"c is grater number";
    }
    
    return 0;

}

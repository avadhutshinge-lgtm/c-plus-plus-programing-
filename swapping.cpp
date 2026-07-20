#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the first number="<<endl;
    cin>>a;
    cout<<"Enter the second number="<<endl;
    cin>>b;
    cout<<"Enter the third number="<<endl;
    cin>>c;
    cout<<"Before swapping: a="<<a<<" b="<<b<<" c="<<c<<endl;
    a=b;    
    b=c;
    c=a;
    cout<<"After swapping: a="<<a<<" b="<<b<<" c="<<c<<endl;
    return 0;
}

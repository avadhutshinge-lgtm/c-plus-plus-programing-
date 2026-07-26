#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the year in digits: ";
    cin>>year;

    if (year > 0)
    {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        {
            cout<<"Year is a leap year";
        }
        else
        {
            cout<<"Year is not a leap year";
        }
    }
    else
    {
        cout<<"Please enter a valid positive year.";
    }

    return 0;
}

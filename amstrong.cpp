#include <iostream>
using namespace std;

int main()
{
    int n, temp, rem, sum = 0;

    cout << "Enter number: ";
    cin >> n;

    temp = n;

    while (n > 0)
    {
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }

    if (sum == temp || temp >= 0 && temp <= 9)
        cout << "Armstrong number";
    else
        cout << "Not an Armstrong number";

    return 0;
}
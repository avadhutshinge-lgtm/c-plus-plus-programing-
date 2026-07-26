#include <iostream>
using namespace std;
int main()
{
    int i,n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Multiplication table for " << n <<"\n";
    for (i = 1; i <= 10; i++)
    {
        cout <<n<<"x"<<i<<"="<<(n * i) << "\n";
    }

    return 0;
}

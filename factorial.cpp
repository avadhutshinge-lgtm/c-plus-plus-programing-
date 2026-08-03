#include <iostream>
using namespace std;

int main() {
    int n = 5;
    long factorial = 1;

    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    cout << "Factorial of " << n << " is " << factorial;

    return 0;
}

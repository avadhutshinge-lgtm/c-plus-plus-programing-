#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    Complex subtract(Complex c)
    {
        return Complex(real - c.real, imag - c.imag);
    }

    void display()
    {
        cout << real << " + " << imag << "i";
    }
};

int main()
{
    Complex c1(8, 6);
    Complex c2(3, 2);
    Complex c3 = c1.subtract(c2);

    cout << "First complex number = ";
    c1.display();

    cout << "\nSecond complex number = ";
    c2.display();

    cout << "\nSubtraction = ";
    c3.display();

    return 0;
}
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

    Complex add(Complex c)
    {
        return Complex(real + c.real, imag + c.imag);
    }

    void display()
    {
        cout << real << " + " << imag << "i";
    }
};

int main()
{
    Complex c1(2, 3);
    Complex c2(4, 5);
    Complex c3 = c1.add(c2);

    cout << "First complex number = ";
    c1.display();

    cout << "\nSecond complex number = ";
    c2.display();

    cout << "\nAddition = ";
    c3.display();

    return 0;
}
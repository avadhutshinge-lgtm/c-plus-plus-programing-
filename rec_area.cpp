#include <iostream>
using namespace std;

class Rectangle
{
    float length, width;

public:
    // Constructor
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    // Function to calculate area
    float area()
    {
        return length * width;
    }

    // Function to calculate perimeter
    float perimeter()
    {
        return 2 * (length + width);
    }

    // Destructor
    ~Rectangle()
    {
        cout << "Destructor called." << endl;
    }
};

int main()
{
    float l, w;

    cout << "Enter length: ";
    cin >> l;

    cout << "Enter width: ";
    cin >> w;

    Rectangle r(l, w);

    cout << "Area = " << r.area() << endl;
    cout << "Perimeter = " << r.perimeter() << endl;

    return 0;
}
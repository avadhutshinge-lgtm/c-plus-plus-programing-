#include <iostream>
using namespace std;

class Product
{
private:
    int productID;
    string productName;
    int quantity;
    float unitPrice;

public:
    void accept()
    {
        cout << "Enter Product ID number: ";
        cin >> productID;

        cout << "Enter Product Name: ";
        cin >> productName;

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Unit Price: ";
        cin >> unitPrice;
    }

    float calculateTotalCost()
    {
        return quantity * unitPrice;
    }

    void display()
    {
        cout << "\nProduct Information\n";
        cout << "Product ID = " << productID << endl;
        cout << "Product Name = " << productName << endl;
        cout << "Quantity = " << quantity << endl;
        cout << "Unit Price = " << unitPrice << endl;
        cout << "Total Cost = " << calculateTotalCost() << endl;
    }
};

int main()
{
    Product p;

    p.accept();
    p.display();

    return 0;
}
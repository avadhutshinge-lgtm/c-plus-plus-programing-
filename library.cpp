#include <iostream>
using namespace std;

class LibraryBook
{
    char bookName[50];
    char authorName[50];
    bool available;

public:

    void getBook()
    {
        cout << "Enter Book Name: ";
        cin.getline(bookName, 50);

        cout << "Enter Author Name: ";
        cin.getline(authorName, 50);

        available = true;
    }

    void issueBook()
    {
        if (available)
        {
            available = false;
            cout << "\nBook issued successfully." << endl;
        }
        else
        {
            cout << "\nBook is already issued." << endl;
        }
    }

    void returnBook()
    {
        if (!available)
        {
            available = true;
            cout << "\nBook returned successfully." << endl;
        }
        else
        {
            cout << "\nBook is already available." << endl;
        }
    }

    void displayBook()
    {
        cout << "\nBook Name: " << bookName << endl;
        cout << "Author Name: " << authorName << endl;

        if (available)
            cout << "Status: Available" << endl;
        else
            cout << "Status: Issued" << endl;
    }
};

int main()
{
    LibraryBook book;

    book.getBook();

    book.issueBook();
    book.displayBook();

    book.returnBook();
    book.displayBook();

    return 0;
}
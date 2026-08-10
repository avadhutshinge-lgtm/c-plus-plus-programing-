#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string name;
    int rollNo;
    float marks;
public:
    void accept()
    {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter marks: ";
        cin >> marks;
    }
    void display()
    {
        cout << "Student Information"<< endl;
        cout << "Name : " << name << endl;
        cout << "Roll No : " << rollNo << endl;
        cout << "Marks :avadhut " << marks << endl;
    }
};
int main()
{
    Student s;
    s.accept();
    s.display();
    return 0;
}
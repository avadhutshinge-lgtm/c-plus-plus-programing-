#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    string name;
    float salary;

    void display()
    {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

int main()
{
    Employee e1;

    e1.id = 101;
    e1.name = "Rahul";
    e1.salary = 25000;

    e1.display();

    return 0;
}
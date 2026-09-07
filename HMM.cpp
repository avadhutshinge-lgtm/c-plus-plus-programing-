#include <iostream>
using namespace std;

class Time
{
private:
    int hours, minutes, seconds;

public:
    void accept()
    {
        cout << "Enter hours, minutes and seconds: ";
        cin >> hours >> minutes >> seconds;
    }

    Time add(Time t)
    {
        Time result;

        result.seconds = seconds + t.seconds;
        result.minutes = minutes + t.minutes;
        result.hours = hours + t.hours;

        if (result.seconds >= 60)
        {
            result.seconds -= 60;
            result.minutes++;
        }

        if (result.minutes >= 60)
        {
            result.minutes -= 60;
            result.hours++;
        }

        return result;
    }

    void display()
    {
        cout << "Resultant Time = "
             << hours << ":"
             << minutes << ":"
             << seconds << endl;
    }
};

int main()
{
    Time t1, t2, result;

    cout << "Enter First Time\n";
    t1.accept();

    cout << "Enter Second Time\n";
    t2.accept();

    result = t1.add(t2);

    cout << "\n";
    result.display();

    return 0;
}
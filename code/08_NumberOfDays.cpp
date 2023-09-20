#include <iostream>
using namespace std;

int main()
{
    int month, year;
    cout << "Enter the year :";
    cin >> year;
    cout << "Enter the month :";
    cin >> month;
    int test = year;
    int t1 = test % 10; // Stores last digit of the Year
    test = test / 10;
    int t2 = test % 10; // Stores second last digit of Year
    bool leap = false;

    // To Check if given year is Leap Year
    if (t1 == 0 && t2 == 0 && year % 400 == 0)
    {
        leap = true;
    }
    else if (year % 4 == 0 && t1 != t2 != 0)
    {
        leap = true;
    }

    // To Check the number of Days in Given Month
    if (month == 2 && leap == true)
    {
        cout << "Number of Days = 29" << endl;
    }
    else if (month == 2 && leap == false)
    {
        cout << "Number of Days = 28" << endl;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        cout << "Number of Days = 30" << endl;
    }
    else
    {
        cout << "Number of Days = 31" << endl;
    }

    return 0;
}
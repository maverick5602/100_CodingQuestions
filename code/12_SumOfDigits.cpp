// Write a program to find Sum of digits of a number
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;
    int m = n;
    int sum = 0;
    while (m > 0)
    {
        sum = sum + (m % 10);
        m = m / 10;
    }
    cout << "The sum of given digits is :" << sum << endl;

    return 0;
}
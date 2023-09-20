// Write a program to identify if the number is Strong number or not
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;
    int m = n, sum = 0, r, fact = 1;
    while (m > 0)
    {
        r = m % 10;
        for (int i = 1; i <= r; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        m = m / 10;
        fact = 1;
    }

    if (sum == n)
    {
        cout << "The given number is a Strong Number " << endl;
    }
    else
    {
        cout << "The given number is NOT a Strong Number " << endl;
    }
    return 0;
}
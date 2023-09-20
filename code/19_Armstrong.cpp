// Write a program to identify if the number is Armstrong number or not
#include <iostream>
#include <cmath>
using namespace std;

int dig(int n)
{
    int m = n;
    int count = 0;
    while (m > 0)
    {
        m = m / 10;
        count++;
    }
    return count;
}
int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;

    int digits = dig(n);
    int sum = 0;
    int r;

    int m = n;
    while (m > 0)
    {
        r = m % 10;

        sum = sum + pow(r, digits);
        m = m / 10;
    }

       if (sum == n)
    {
        cout << "The given number is an Armstrong number " << endl;
    }
    else
    {
        cout << "The given number is NOT an Armstrong number " << endl;
    }
    return 0;
}
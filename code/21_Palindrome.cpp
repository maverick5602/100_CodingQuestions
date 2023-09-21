// Write a program to identify if the number is Palindrome or not
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;
    int m = n, r, num = 0;
    while (m > 0)
    {
        r = m % 10;
        num = num * 10 + r;
        m = m / 10;
    }
    if (num == n)
    {
        cout << "The given number is a PALINDROME" << endl;
    }
    else
    {
        cout << "The given number is NOT a PALINDROME" << endl;
    }
}
// Write a program to identify if the number is Perfect number or not
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number N :";
    cin >> n;
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
    {
        cout << "The given number is a PERFECT NUMBER " << endl;
    }
    else
    {
        cout << "The given number is NOT a PERFECT NUMBER " << endl;
    }

    return 0;
}
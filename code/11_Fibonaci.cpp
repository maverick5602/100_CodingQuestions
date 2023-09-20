// Write a program to find Fibonacci series up to n

#include <iostream>
using namespace std;

void fib(int n)
{
    if (n == 1)
    {
        cout << "0" << endl;
    }
    else if (n == 2)
    {
        cout << "0 1" << endl;
    }
    else
    {
        int a = 0, b = 1;
        int sum = a + b;
        cout << a << " " << b << " ";
        for (int i = 0; i < n - 2; i++)
        {
            cout << sum << " ";

            a = b;
            b = sum;
            sum = a + b;
        }
    }
}

int main()
{
    int n;
    cout << "Enter an integer :";
    cin >> n;
    fib(n);

    return 0;
}
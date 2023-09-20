// Write a program to find the Factors of a number
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number N :";
    cin >> n;
    cout << "Factors of the given number are :" << endl;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}
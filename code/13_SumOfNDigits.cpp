// Write a program to find Sum of N natural numbers
#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Enter the value of N :";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "The sum of " << n << " digits is :" << sum << endl;

    return 0;
}
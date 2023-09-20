// Write a program to reverse a given number
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
    cout << "The reversed Number is " << num << endl;
    return 0;
}
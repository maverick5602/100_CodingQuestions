// Given an integer array of size N. Write Program to find sum of positive square elements in the array.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array:";
    cin >> n;
    int a[n];
    int sum = 0;
    cout << "Enter the elements of the array: " << endl;
    for (auto i : a)
    {
        cin >> i;
        sum = sum + (i * i);
    }
    cout << "The sum of positive squares is :" << sum;
    return 0;
}

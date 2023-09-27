// Given an integer array of size N, write a program to reverse the array;
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array :";
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int j = n - 1;
    for (int i = 0; i < n / 2; i++)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
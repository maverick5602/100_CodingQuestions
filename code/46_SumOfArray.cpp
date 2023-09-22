// Write Program to find sum of elements in an array
#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Enter the size of first array :";
    cin >> n;
    int a[n];
    int sum = 0;
    cout << "Enter the elements of Array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }
    cout << "The sum of elements is :" << sum;
    return 0;
}
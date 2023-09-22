// Write Program to find smallest and largest element in an array
#include <iostream>

using namespace std;
int main()
{
    int n, odd = 0, even = 0;
    cout << "Enter the size of first array :";
    cin >> n;
    int a[n];
    cout << "Enter the elements of Array :" << endl;
    cin >> a[0];
    int largest = a[0], smallest = a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > largest)
        {
            largest = a[i];
        }
        else if (a[i] < smallest)
        {
            smallest = a[i];
        }
    }

    cout << "The largest element is :" << largest << endl;
    cout << "The smallest element is :" << smallest << endl;
    return 0;
}

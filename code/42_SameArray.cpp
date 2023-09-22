// Write Program to check if two arrays are the same or not
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the size of first array :";
    cin >> n;
    cout << "Enter the size of second array :";
    cin >> m;

    int a[n], b[m];
    cout << "Enter the elements of Array 1 :";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n); // Sort the array

    cout << "Enter the elements of Array 2 :";
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(b, b + n); // Sort the second array

    int flag = 0;

    for (int i = 0; i < n; i++) // check if each element matches
    {

        if (a[i] != b[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "SAME";
    }
    else
    {
        cout << "NOT SAME";
    }
    return 0;
}

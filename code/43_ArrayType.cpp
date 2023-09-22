// Write Program to find the array type - odd /even/mixed
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, odd = 0, even = 0;
    cout << "Enter the size of first array :";
    cin >> n;
    int a[n];
    cout << "Enter the elements of Array :";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            even = 1;
        }
        else
        {
            odd = 1;
        }
    }
    if (odd == 1 && even == 1)
    {
        cout << "The given array contains MIXED elements";
    }
    else if (odd == 0 && even == 1)
    {
        cout << "The given array contains EVEN elements";
    }
    else
    {
        cout << "The given array contains ODD elements";
    }

    return 0;
}

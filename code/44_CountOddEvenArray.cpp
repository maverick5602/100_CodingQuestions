// Write Program to find number of even and odd elements in an array
#include <iostream>

using namespace std;
int main()
{
    int n, odd = 0, even = 0;
    cout << "Enter the size of first array :";
    cin >> n;
    int a[n];
    cout << "Enter the elements of Array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "The number of Even elements : " << even << endl;
    cout << "The number of ODD elements :" << odd;

    return 0;
}
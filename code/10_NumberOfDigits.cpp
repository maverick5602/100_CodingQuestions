#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter a digit :";
    cin >> n;
    m = n;
    int count = 0;
    if (n == 0)
    {
        cout << "Number of digits = 1";
    }
    else
    {
        while (m > 0)
        {
            m = m / 10;
            count++;
        }
        cout << "Total number of digits = " << count;
    }

    return 0;
}
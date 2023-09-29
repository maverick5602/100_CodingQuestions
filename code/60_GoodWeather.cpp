/*Good Weather
The weather report of Magicland is Good if the number of sunny days in a week is strictly greater than the number of rainy days.
Given 7 integers A1,A2,A3,A4,A5,A6,A7 where Ai=1 denotes that the ith day of week in Magicland is a sunny day,
Ai=0 denotes that the ith day in Magicland is a rainy day. Determine if the weather report of Magicland is Good or not.
*/
#include <iostream>
using namespace std;
int main()
{
    int t;
    cout << "Enter the total number of test cases : ";
    cin >> t;
    while (t > 0)
    {
        int a[7];
        int one = 0, zero = 0;
        cout << "Enter 0 for a rainy day or 1 for sunny day: " << endl;
        for (int i = 0; i < 7; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
                one++;
            }
            else if (a[i] == 0)
            {
                zero++;
            }
        }
        if (one > zero)
        {
            cout << "Good Weather " << endl;
        }
        else
        {
            cout << "Bad Weather " << endl;
        }
        t--;
    }
    return 0;
}

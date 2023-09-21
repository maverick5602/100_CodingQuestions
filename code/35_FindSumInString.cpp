// Write a Program to Count the sum of numbers in a string
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a String : ";
    string s;
    int sum = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (int(s[i]) >= 48 && int(s[i]) <= 57) // ASCII Of 0 is 48 and that of 9 is 57
        {
            sum = sum + (int(s[i])) - 48; // subtract 48 from ascii value to get actual digit
        }
    }

    cout << "The sum of digits in the given string is : " << sum;
    return 0;
}

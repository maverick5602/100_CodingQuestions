// Write a program to Replace all 0’s with 1 in a given integer
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;

    string a = to_string(n); // type cast from integer to string
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == '0')
        {
            a[i] = '1';
        }
    }
    int am = stoi(a); // Type cast from string to integer
    cout << "The new number is : " << am;
    return 0;
}
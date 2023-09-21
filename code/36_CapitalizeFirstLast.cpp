// Write a Program to Capitalize the first and last letter of each word of a string
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a String : ";
    string s;
    int count = 0;
    cin >> s;
    s[0] = toupper(s[0]);
    s[s.length() - 1] = toupper(s[s.length() - 1]);
    cout << "The new string is :" << s;
    return 0;
}
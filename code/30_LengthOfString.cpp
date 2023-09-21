// Write a Program to print Length of the string without using strlen() function
#include <iostream>
using namespace std;

int main()
{
    string s1;
    cout << "Enter the string :";
    cin >> s1;
    int i = 0;
    while (s1[i] != '\0') // "\0" is a NULL character which is present at the end of the string.
    {
        i++;
    }
    cout << "The length of the given string is :" << i;

    return 0;
}
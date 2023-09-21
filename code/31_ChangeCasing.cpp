#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1;
    cout << "Enter the string :";
    int i = 0;
    cin >> s1;
    while (s1[i] != '\0')
    {
        if (islower(s1[i]))
        {
            s1[i] = toupper(s1[i]);
        }
        else if (isupper(s1[i]))
        {
            s1[i] = tolower(s1[i]);
        }
        i++;
    }
    cout << "The new string is :" << s1;
    return 0;
}
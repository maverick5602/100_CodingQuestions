#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a String : ";
    string s;
    int count = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            for (int j = i; j < s.length(); j++)
            {
                s[j] = s[j + 1];
            }
            count++;
        }
    }
    cout << "The New string is :";
    for (int i = 0; i < (s.length() - count); i++)
    {
        cout << s[i];
    }
    return 0;
}

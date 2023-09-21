#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a String : ";
    string s;
    int count = 0;
    cin >> s;
    int last = s.length() - 1;
    int flag = 0;
    for (int i = 0; i < s.length() / 2; i++)
    {
        if (s[i] != s[last])
        {
            cout << "NOT PALINDROME";
            flag = 1;
            break;
        }
        i++;
        last--;
    }
    if (flag == 0)
    {
        cout << "PALINDROME";
    }

    return 0;
}

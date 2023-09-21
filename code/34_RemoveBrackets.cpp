// Get an algebraic expression as input from the user and then remove all the brackets in that.
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
        if (s[i] == '(' || s[i] == ')')
        {
            for (int j = i; j < s.length(); j++)
            {
                s[j] = s[j + 1];
            }
            count++;
        }
    }
    cout << "The new Algebraic expression is :" << s;
    return 0;
}

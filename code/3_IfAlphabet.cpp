#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a character :" << endl;
    char c;
    cin >> c;
    int ascii = c;
    if ((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122))
    {
        cout << "The given character is an ALPHABET " << endl;
    }
    else
    {
        cout << "The given character is not an ALPHABET " << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a character : " << endl;
    char c;
    cin >> c;
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        cout << "The given Character is a Vowel " << endl;
    }
    else
    {
        cout << "The given Character is a consonant " << endl;
    }
    return 0;
}
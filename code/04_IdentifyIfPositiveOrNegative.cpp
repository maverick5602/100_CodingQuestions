#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a digit :" << endl;
    int n;
    cin >> n;
    if (n >= 0)
    {
        cout << "The given digit is Positive " << endl;
    }
    else
    {
        cout << "The given digit is Negative " << endl;
    }

    return 0;
}
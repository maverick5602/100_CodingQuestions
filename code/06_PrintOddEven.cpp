#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a digit : ";
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "The given digit is EVEN " << endl;
    }
    else
    {
        cout << "The given digit is ODD " << endl;
    }
    return 0;
}
// Write a program to Add two fractions
#include <iostream>
using namespace std;

int main()
{
    int x1, y1, x2, y2, x3, y3;
    cout << "Enter the value of the 1st numerator :";
    cin >> x1;
    cout << "Enter the value of the 1st denomenator :";
    cin >> y1;
    cout << "Enter the value of the 2nd numerator :";
    cin >> x2;
    cout << "Enter the value of the 2nd denomenator :";
    cin >> y2;

    x3 = ((x1 * y2) + (x2 * y1));
    y3 = (y1 * y2);

    cout << "The addition of the given fraction is : " << x3 / y3 << endl;
}
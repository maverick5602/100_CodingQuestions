#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter The the coefficeient of x^2 :";
    cin >> a;
    cout << "Enter The the coefficeient of x :";
    cin >> b;
    cout << "Enter The the constant :";
    cin >> c;
    double p, q; // Root of a quadratic equation = -b +- under root (b^2 -4ac)/2a;
    double r = pow(((b * b) - (4 * a * c)), (0.5));

    p = ((-1 * b) + r) / (2 * a);
    q = ((-1 * b) - r) / (2 * a);
    cout << "Root 1 = " << p << endl;
    cout << "Root 2 = " << q << endl;

    return 0;
}
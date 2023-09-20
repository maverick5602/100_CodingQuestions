#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the value of x : ";
    int a;
    cin >> a;
    cout << "Enter the value of y : ";
    int b;
    cin >> b;
    if (a == 0 && b == 0)
    {
        cout << "The given point is at (0,0), thus it lies in the center of all the 4 quadrants :" << endl;
    }
    else if (a >= 0 && b >= 0)
    {
        cout << "The point lies in the First Quadrant " << endl;
    }
    else if (a >= 0 && b <= 0)
    {
        cout << "The point lies in the Fourth Quadrant " << endl;
    }
    else if (a <= 0 && b >= 0)
    {
        cout << "The point lies in the Second Quadrant " << endl;
    }
    else if (a <= 0 && b <= 0)
    {
        cout << "The point lies in the Third Quadrant " << endl;
    }

    return 0;
}
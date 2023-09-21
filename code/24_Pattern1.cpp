// Write a program to print Pyramid pattern using stars
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter an integer:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "* ";
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
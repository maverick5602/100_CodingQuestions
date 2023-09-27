// Write a program to print Pyramid pattern using stars
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter an integer:";
    cin >> n;
    for (int i = 1; i < n; i++)
    {

        for (int j = i - n + 1; j <= n; j++)
        {
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }

    return 0;
}
// Write a program to identify if the number is Prime number or not
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;
    if (n < 2)
    {
        cout << "NOT PRIME" << endl;
    }
    else if (n == 2)
    {
        cout << "PRIME" << endl;
    }
    else
    {
        int flag = 0;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                cout << "NOT PRIME" << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "PRIME" << endl;
        }
    }

    return 0;
}
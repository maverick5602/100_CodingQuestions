// Write a program to calculate Maximum number of handshakes
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the toal number of people in the room :";
    cin >> n;
    int sum = 0;
    while (n > 0)
    {
        sum = sum + (n - 1);
        n = n - 1;
    }
    cout << "The total number of handshakes is : " << sum;

    return 0;
}
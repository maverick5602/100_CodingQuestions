/*Nejiya has a bucket having a capacity of K liters. It is already filled with X liters of water.
Find the maximum amount of extra water in liters that Nejiya can fill in the bucket without overflowing.
Input Format
The first line will contain T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains two space separated integers K and X - as mentioned in the problem.
Output Format
For each test case, output in a single line, the amount of extra water in liters that Nejiya can fill in the bucket without overflowing.*/
#include <iostream>
using namespace std;
int main()
{
    int t, n, x, p;
    cout << "Enter the total number of test cases : ";
    cin >> t;
    while (t > 0)
    {
        int k, x;
        cout << "Enter the bucket capacity and the amount of water already filled in the bucket (L): ";
        cin >> k >> x;
        cout << "The maximum amount of extra water in liters that Nejiya can fill in the bucket without overflowing is :" << k - x << "Liters " << endl;
        t--;
    }
    return 0;
}

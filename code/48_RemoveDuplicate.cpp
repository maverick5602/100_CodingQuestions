// Write Program to remove duplicate elements in an array
#include <iostream>
#include <set>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of first array :";
    cin >> n;
    set<int> s1;
    int m;
    cout << "Enter the elements of Array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        s1.insert(m);
    }
    for (auto a : s1)
    {
        cout << a << " ";
    }

    return 0;
}
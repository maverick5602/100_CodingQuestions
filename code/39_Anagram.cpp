#include <iostream>
#include <map>
using namespace std;

int main()
{
    string s1;
    cout << "ENTER First string : ";
    cin >> s1;
    string s2;
    cout << "ENTER Second string : ";
    cin >> s2;
    map<char, int> m1; // create 2 maps and compare them using == operator directly
    map<char, int> m2;
    for (auto i : s1)
    {
        m1[i]++;
    }
    for (auto i : s2)
    {
        m2[i]++;
    }
    if (m1 == m2)
    {
        cout << "ANAGRAM " << endl;
    }
    else
    {
        cout << "NOT ANAGRAM" << endl;
    }
    return 0;
}
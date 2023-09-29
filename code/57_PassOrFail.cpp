/*Anusree is struggling to pass a certain college course.
The test has a total of N question, each question carries 3 marks for a correct answer and −1 for an incorrect answer. Anusree is a risk-averse person so he decided to attempt all the questions. It is known that Anusree got X questions correct and the rest of them incorrect. For Anusree to pass the course he must score at least P marks.
Will Anusree be able to pass the exam or not?
Input Format
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, three integers N, X, P.
Output Format
For each test case output "PASS" if Chef passes the exam and "FAIL" if Chef fails the exam.
*/
#include <iostream>
using namespace std;
int main()
{
    int t, n, x, p;
    cout << "Enter the total number of test cases : ";
    cin >> t;
    while (t > 0)
    {
        cout << "Enter the total number of questions :";
        cin >> n;
        cout << "Enter the total number of questions Anusree got correct  :";
        cin >> x;
        cout << "Enter the passing marks:";
        cin >> p;

        int marks = (x * 3) - ((n - x));
        if (marks >= p)
        {
            cout << "Pass" << endl;
        }
        else
        {
            cout << "Fail" << endl;
        }
        t--;
    }

    return 0;
}
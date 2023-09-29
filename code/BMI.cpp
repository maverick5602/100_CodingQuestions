/*Body Mass Index
You are given the height H (in metres) and mass M (in kilograms) of Anusree. The Body Mass Index (BMI) of a person is computed as M/H^2.
Report the category into which Anusree falls, based on his BMI:
Category 1: Underweight if BMI ≤18
Category 2: Normal weight if BMI ∈{19, 20,…, 24}
Category 3: Overweight if BMI ∈{25, 26,…, 29}
Category 4: Obesity if BMI  ≥30*/
#include <iostream>
using namespace std;
int main()
{
    int t;
    float m, h, bmi;
    cout << "Enter the total number of test cases : ";
    cin >> t;
    while (t > 0)
    {
        cout << "Enter the Weight(in Kgs): ";
        cin >> m;
        cout << "Enter the Height (in Meters):";
        cin >> h;
        bmi = m / (h * h);
        if (bmi <= 18)
        {
            cout << "Catrgory 1 : Underweight " << endl;
        }
        else if (bmi > 18 && bmi < 25)
        {
            cout << "Catrgory 2 : Normal Weight " << endl;
        }
        else if (bmi >= 25 && bmi < 30)
        {
            cout << "Catrgory 3 : Over Weight " << endl;
        }
        else if (bmi >= 30)
        {
            cout << "Catrgory 4 : Obese " << endl;
        }
        t--;
    }
    return 0;
}

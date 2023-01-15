#include <iostream>
using namespace std;
int num1, num2, num3;
bool greaterNumber(int num1, int num2, int num3);
main()
{
    cout << "Enter first number:";
    cin >> num1;
    cout << "Enter second number:";
    cin >> num2;
    cout << "Enter third number:";
    cin >> num3;
    greaterNumber(num1, num2, num3);
}
bool greaterNumber(int num1, int num2, int num3)
{
    if (num1 == num2 && num2 == num3)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
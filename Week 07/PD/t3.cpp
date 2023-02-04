#include <iostream>
using namespace std;

void printStearic(int);

int main()
{
    int number;
    cout << "enter a number";
    cin >> number;
    printStearic(number);
  
}
void printStearic(int number)
{

    number = number / 2;
    int tempNumber = number;
    for (; number > 0; number--)
    {
        for (int i = number; i > 0; i--)
        {
            cout << " ";
        }
        for (int j = number; j <= tempNumber; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i <= tempNumber; i++)
    {
        cout << "*";
    }
    cout << endl;
    for (int i = 0; i <= tempNumber; i++)
    {
        cout << "*";
    }
    cout << endl;
    number = tempNumber;
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = i; k <= number; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

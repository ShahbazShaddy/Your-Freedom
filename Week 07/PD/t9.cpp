#include <iostream>
using namespace std;
#include <conio.h>
void doubletriangle(int);
int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;
    doubletriangle(number);
}
void doubletriangle(int number)
{
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        for (int k = i + 1; (k <= number * 2 - i); k++)
        {
            cout << " ";
        }

        for (int l = (number - i); l < number; l++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
#include <iostream>
using namespace std;
main()
{
    int arrSize = 0;
    int mod=0;
    cout << "Enter array size:";
    cin >> arrSize;
    int num[arrSize];
    for (int index = 0; index < arrSize; index++)
    {
        cout << "Enter number:";
        cin >> num[arrSize];
        mod=num[arrSize]%10;
    }
    for (int index = 0; index < arrSize; index++)
    {
        if (mod == 7)
        {
            cout << "Boom!";
            break;
        }
        if (mod != 7)
        {

            cout << "There is no 7 in the array.";
            break;
        }
    }
}
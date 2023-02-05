#include <iostream>
using namespace std;

main()
{
    int arrSize;
    int coloringEach = 0;
    int output = 0;
    int count1 = 0;
    int count2 = 0;

    cout << "Enter array size: ";
    cin >> arrSize;
    string color[arrSize];

    for(int x = 0 ; x < arrSize ; x++)
    {
        cout << "Enter color: ";
        cin >> color[x];
        count1++;
    }
    coloringEach = count1 * 2;
    for(int y = 0 ; y < arrSize ; y++)
    {
        if (color[y] == color [y+1])
        {
            continue;
        }
        if(color[y] != color[y + 1])
        {
            count2++;
        }
    }
    output = count2 + coloringEach - 1;
    cout << output << endl;

}
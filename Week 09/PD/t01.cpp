#include <iostream>
using namespace std;
main()
{
    string item;
    int weight;
    float totalPrice = 0;
    int index = 0;
    string fruit[4] = {"peach", "apple", "guava", "watermelon"};
    int price[4] = {60, 70, 40, 30};
    cout << "Enter fruit name:";
    cin >> item;
    cout << "Enter weight (kgs):";
    cin >> weight;
    for (int index = 0; index < 4; index++)
    {
        if (item == fruit[index])
        {
            totalPrice = (weight) * (price[index]);
            cout << "Bill: " << totalPrice;
        }
    }
}
#include <iostream>
using namespace std;
float totalPrice(float price, char choice);

main()
{
    float price, finalPrice;
    char choice;
    cout << "Price of vehicle: ";
    cin >> price;
    cout << "Vehicle type code: ";
    cin >> choice;
    float output = totalPrice(price, choice);
    cout << "Total Price after tax: " << output;
}
float totalPrice(float price, char choice)
{
    float finalPrice;
    if (choice == 'M')
    {
        finalPrice = price + (price * 0.06);
    }
    else if (choice == 'E')
    {
        finalPrice = price + (price * 0.08);
    }
    else if (choice == 'S')
    {
        finalPrice = price + (price * 0.1);
    }
    else if (choice == 'V')
    {
        finalPrice = price + (price * 0.12);
    }
    else if (choice == 'T')
    {
        finalPrice = price + (price * 0.15);
    }
    return finalPrice;
}
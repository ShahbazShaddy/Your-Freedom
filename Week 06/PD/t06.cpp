#include <iostream>
using namespace std;

float charge(string month, int days);

main()
{
    string month;
    int days;
    cout << "Enter Month of stay:";
    cin >> month;
    cout << "Enter days of stays: ";
    cin >> days;
    charge(month, days);
}

float charge(string month, int days)
{
    float total1, total2;
    int withoutDiscount;
    if ((month == "May" || month == "October") && (days > 7 && days <= 14))
    {   
        withoutDiscount = days * 50;
        total1 = withoutDiscount - (withoutDiscount* 0.05);
        total2 = days * 65;
        cout << "Apartment : " << total2 << " $" << endl;
        cout << "Studio : " << total1 << " $" << endl;
    }
    else if ((month == "May" || month == "October") && days > 14)
    {
        withoutDiscount = days * 50;
        total1 = withoutDiscount - (withoutDiscount * 0.3);
        withoutDiscount = days * 65;
        total2 = withoutDiscount - (withoutDiscount * 0.1);
        cout << "Apartment : " << total2 << " $" << endl;
        cout << "Studio : " << total1 << " $" << endl;
    }
        if ((month == "June" || month == "September"))
    {   
        withoutDiscount = days * 68.70;
        total1 = withoutDiscount;
        total2 = days * 75.20;
        cout << "Apartment : " << total1 << " $" << endl;
        cout << "Studio : " << total2 << " $" << endl;
    }
    else if ((month == "June" || month == "September") && days > 14)
    {
        withoutDiscount = days * 68.70;
        total1 = withoutDiscount - (withoutDiscount * 0.10);
        withoutDiscount = days * 75.20;
        total2 = withoutDiscount - (withoutDiscount * 0.20);
        cout << "Apartment : " << total1 << " $" << endl;
        cout << "Studio : " << total2 << " $" << endl;
    }
    if ((month == "July" || month == "August"))
    {   
        withoutDiscount = days * 77;
        total1 = withoutDiscount;
        total2 = days * 76;
        cout << "Apartment : " << total1 << " $" << endl;
        cout << "Studio : " << total2 << " $" << endl;
    }
    else if ((month == "June" || month == "September") && days > 14)
    {
        withoutDiscount = days * 77;
        total1 = withoutDiscount - (withoutDiscount * 0.10);
        withoutDiscount = days * 76;
        total2 = withoutDiscount;
        cout << "Apartment : " << total1 << " $" << endl;
        cout << "Studio : " << total2 << " $" << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
main()
{
    int count;
    cout << "Enter count of cargo for transportation:";
    cin >> count;
    float tons;
    float percent;
    float bus;
    float truck;
    float train;
    float percent1;
    float percent2;
    float percent3;
    for (int x = 1; x <= count; x++)
    {
        cout << "Enter tons of cargo:";
        cin >> tons;

        if (tons <= 3)
        {
            bus = bus+tons;
            
        }
        if (tons > 3 && tons <= 11)
        {
            truck = tons;
            
        }
        if (tons > 11)
        {
            train = tons;
            
        }
    }
    int sum = bus + truck + train;
    float average;
    average = (bus * 200 + truck * 175 + train * 120) / sum;
    cout << "Average Price=" << average << endl;
    percent1 = (bus * 100) / sum;
    cout << "Percentage carried by minibus=" << percent1 << endl;
    percent2 = (truck * 100) / sum;
    cout << "Percentage carried by truck=" << percent2 << endl;
    percent3 = (train * 100) / sum;
    cout << "Percentage carried by train=" << percent3 << endl;
    
}
#include <iostream>
using namespace std;
main()
{
    string movieName1;
    int index = 5;
    string movieName[index] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    int price = 500;
    cout << "Enter movie name:";
    cin >> movieName1;

    for (int index = 0; index < 5; index++)
    {
        float afterDiscount;
        if (movieName1==movieName[index] && index % 2 == 0)
        {
            afterDiscount=price - (price * 0.1);  
            cout<<"Price after discount: " <<afterDiscount;  
        }
        
       if (movieName1==movieName[index] && index % 2 != 0)
        {
            afterDiscount=price - (price * 0.05); 
            cout << "Price after discount: " << afterDiscount;
        }
        
    }
}
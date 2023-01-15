#include <iostream>
using namespace std;

float charge(char serv , string fruit , float mins);

main()
{
    char serv;
    string fruit;
    float mins;
    cout<<"Enter 'W' for Weekend and 'N' for Days except weekends :";
    cin>>serv;
    cout<<"Enter fruit name:";
    cin>>fruit;
    cout<<"Enter Quantity : ";
    cin>>mins;
charge(serv, fruit, mins);
}

float charge(char serv , string fruit , float mins)
{ float total;
    if(serv == 'N' && fruit == "banana")
    {
        total = 2.50*mins;
        cout<<"Total price to pay = "<<total<<" $";
    }
    else if (serv == 'N' && fruit == "Apple")
    {
        total =  1.20 * mins;
        cout<<"Total price to pay = "<<total<<" $";
    }
    else if(serv == 'N' && fruit == "Orange")
    {
        total = 0.85*mins;
        cout<<"Total price to pay = "<<total<<" $";
    }
    else if (serv == 'N' && fruit == "grapefruit")
    {
        total =  1.45 * mins;
        cout<<"Total price to pay = "<<total<<" $";
    }
    else if(serv == 'N' && fruit == "kiwi")
    {
        total = 2.70*mins;
        cout<<"Total price to pay = "<<total<<" $";
    }
    else if (serv == 'N' && fruit == "Pinapple")
    {
        total =  5.50 * mins;
        cout<<"Total price to pay = "<<total<<" $";
    }
    else if(serv == 'N' && fruit == "grapes")
    {
        total = 3.85*mins;
        cout<<"Total price to pay = "<<total<<" $";
    }


    if(serv == 'W' && fruit == "banana")
    {
        total = 2.70*mins;
        cout<<"Total price to pay = "<<total<<" $";
    }
    else if (serv == 'W' && fruit == "Apple")
    {
        total =  1.25 * mins;
        cout<<"Total price to pay = "<<total<<" $";
    }
    else if(serv == 'W' && fruit == "Orange")
    {
        total = 0.90*mins;
        cout<<"Total price to pay = "<<total<<" $";
    }
    else if (serv == 'W' && fruit == "grapefruit")
    {
        total =  1.60 * mins;
        cout<<"Total price to pay = "<<total<<" $";
    }
    else if(serv == 'W' && fruit == "kiwi")
    {
        total = 3.00*mins;
        cout<<"Total price to pay = "<<total<<" $";
    }
    else if (serv == 'W' && fruit == "Pinapple")
    {
        total =  5.60 * mins;
        cout<<"Total price to pay = "<<total<<" $";
    }
    else if(serv == 'W' && fruit == "grapes")
    {
        total = 4.20*mins;
        cout<<"Total price to pay = "<<total<<" $";
    }

return 0;
}
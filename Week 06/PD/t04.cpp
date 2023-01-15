#include <iostream>
using namespace std;

float charge(char serv , char time , int mins);

main()
{
    char serv, time;
    int mins;
    cout<<"Enter type of service You have subscribed "<<endl;
    cout<<"Enter 'R' for regular and 'P' for premium :";
    cin>>serv;
    cout<<"Enter minutes of call :";
    cin>>mins;
    if(serv == 'P')
    {
        cout<<"Enter 'D' for day call and 'N' for night call :";
        cin>>time;
    }
    charge(serv, time, mins);
}

float charge(char serv , char time , int mins)
{ float total;
    if(serv == 'R' && mins <= 50)
    {
        total = 10;
        cout<<"Total price to pay = "<<total<<" $";
    }
    else if (serv == 'R' && mins > 50)
    {
        mins = mins-50;
        total = 10 + (mins*0.20);
        cout<<"Total price to pay = "<<total<<" $";
    }
    if (serv == 'P' && time == 'D' && mins <= 75)
    {
        total = 25;
        cout<<"Total price to pay = "<<total<<" $";
    }
    else if (serv == 'P' && time == 'D' && mins > 75)
    {
        mins = mins-75;
        total = 25 + (mins*0.10);
        cout<<"Total price to pay = "<<total<<" $";
    }
    else if (serv == 'P' && time == 'N' && mins <= 100)
    {
        total = 25;
        cout<<"Total price to pay = "<<total<<" $";
    }
    else if (serv == 'P' && time == 'D' && mins > 100)
    {
        mins = mins-100;
        total = 25 + (mins*0.05);
        cout<<"Total price to pay = "<<total<<" $";
    }
return 0;
}
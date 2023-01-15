#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
float cheapest(string time, int length);
string time;
int length;
main()
{
    system("cls");
    cout<<"Enter the time period(day/night) ";
    cin>>time;
    cout<<"Enter the distance: ";
    cin>> length;
    float
    ans= cheapest(time, length); 
    cout<<ans<<" is the best price"<<endl;
}
float cheapest(string time, int length)
{
    float lowest;
    if(time=="day" && length>=1 && length <20)
    {
        float taxi_day = length *0.79;
        lowest= taxi_day;
    }
    if(time=="day" && length>=20 && length < 100)
    {
        float bus = length*0.09;
        lowest= bus;
    }
    if(time=="day" && length >=100)
    {
        float train = length*0.06;
        lowest= train;
    }
    if(time=="night" && length>=1 && length <20)
    {
        float taxi_night = length *0.90;
        
        lowest= taxi_night;
    }
    if(time=="day" && length>=20 && length < 100)
    {
        float bus = length*0.09;
        lowest= bus;
    }
    if(time=="night" && length >=100)
    {
        float train = length*0.06;
        lowest= train;
    }
    return lowest;   
    
}
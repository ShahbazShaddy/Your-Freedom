#include <iostream>
using namespace std;
string activity(string temp,string humi);
main()
{
    string temp;
    string humi;
    cout<<"Temperature: ";
    cin>>temp;
    cout<<"Humidity: ";
    cin>>humi;
    string printActivity=activity(temp,humi);
    cout<<""<<printActivity;
}
string activity(string temp,string humi)
{
    string result;
    if(temp=="warm" && humi=="dry")
    {
        result="Play tennis";
    }
    if(temp=="warm" && humi=="humid")
    {
        result="Swim";
    }
    if(temp=="cold" && humi=="dry")
    {
        result="Play basketball";
    }
    if(temp=="cold" && humi=="humid")
    {
        result="Watch TV";
    }
    return result;
}
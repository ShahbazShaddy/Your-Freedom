#include <iostream>
using namespace std;

main()
{
    string year;
    float holidays, home;
    float played;
	int play;

    cout << "Enter Year type: ";
    cin >> year;

    cout << "Enter holidays in a year: ";
    cin >> holidays;

    cout << "Enter hometown weeks: ";
    cin >> home;

    played = 48 - home;
    played = played - (played * 0.25);
	holidays = (holidays * (0.666666666667));

    played = played + holidays;
    played = played + home;
  

    if (year == "leap")
    {
        played = played + (played * 0.15);	
	play=played;
        cout << play;
    }
    else if (year == "normal")
    {	
	play = played;
        cout << play;
    }
    else
    {
    }
}

#include<iostream>
using namespace std;

void report(string month, int date);


main()
{
    string month;
    int date;
    cout<<"Enter birth month: ";
    cin>>month;
    cout<<"Enter birth date: ";
    cin>>date;
 report(month, date);
}

void report(string month, int date)
{

    if (month == "January"  && date >= 20 )
    {
        cout<<"Zodic sign is Aquarius";
    }
    if (month == "Feburary"  && date <= 18 )
    {
        cout<<"Zodic sign is Aquarius";
    }
        if (month == "Feburary"  && date > 18 )
    {
        cout<<"Zodic sign is Pisces";
    }
    if (month == "March"  && date <= 20 )
    {
        cout<<"Zodic sign is Pisces";
    }
        if (month == "March"  && date >= 21 )
    {
        cout<<"Zodic sign is Aries";
    }
    if (month == "April"  && date <= 19 )
    {
        cout<<"Zodic sign is Aries";
    }
        if (month == "April"  && date >= 20 )
    {
        cout<<"Zodic sign is Taurus";
    }
    if (month == "May"  && date <= 20 )
    {
        cout<<"Zodic sign is Taurus";
    }
        if (month == "May"  && date > 20 )
    {
        cout<<"Zodic sign is Gemini";
    }
    if (month == "June"  && date <= 20 )
    {
        cout<<"Zodic sign is Gemini";
    }
        if (month == "June"  && date > 20 )
    {
        cout<<"Zodic sign is Cancer";
    }
    if (month == "July"  && date <= 22 )
    {
        cout<<"Zodic sign is Cancer";
    }
        if (month == "July"  && date > 22 )
    {
        cout<<"Zodic sign is Leo";
    }
    if (month == "August"  && date <= 22 )
    {
        cout<<"Zodic sign is Leo";
    }
        if (month == "August"  && date > 22 )
    {
        cout<<"Zodic sign is Virgo";
    }
    if (month == "September"  && date <= 22 )
    {
        cout<<"Zodic sign is Virgo";
    }
       if (month == "September"  && date > 22 )
    {
        cout<<"Zodic sign is Libra";
    }
    if (month == "October"  && date <= 22 )
    {
        cout<<"Zodic sign is Libra";
    }
       if (month == "October"  && date > 22 )
    {
        cout<<"Zodic sign is Scorpio";
    }
    if (month == "November"  && date <= 21 )
    {
        cout<<"Zodic sign is Scorpio";
    }
       if (month == "November"  && date > 21 )
    {
        cout<<"Zodic sign is Sagittarius";
    }
    if (month == "December"  && date <= 21 )
    {
        cout<<"Zodic sign is Sagittarius";
    }
       if (month == "December"  && date > 21 )
    {
        cout<<"Zodic sign is Capricon";
    }
    if (month == "January"  && date <= 19 )
    {
        cout<<"Zodic sign is Capricon";
    }

}
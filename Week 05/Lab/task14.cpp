#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
main()
{
int hours,minutes,hh,mm,add;
cout <<"Enter Hours : ";
cin>>hours;
cout <<"Enter minutes : ";
cin>>minutes;
minutes=minutes+15;
mm=minutes%60;
add=minutes/60;
hours=hours+add;
if(hours>23)
{
hh=hours%24;
cout<<hh<<":"<<mm<<endl;
}
if(hours<23)
{
cout<<hours<<":"<<mm<<endl;

}





}
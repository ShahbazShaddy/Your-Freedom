#include <iostream>
using namespace std;

main()
  {
  
  int holidays;
  int workingDays;
  int timeForGames;
  int difference1;
  int difference2;
  cout<<"Number of holidays: ";
  cin>>holidays;
  workingDays=365-holidays;  
  timeForGames=(workingDays*63)+(holidays*127);
  difference1=30000-timeForGames;
  if(difference1>1)
  {
  cout<<"Tom sleeps well "<<difference1<<" min less for play";
  }
  if(difference1<1)
  {
  difference2=difference1*-1;
  cout<<"Tom will run away "<<difference2<<" min for play";
  }
}
#include <iostream>
#include <windows.h>
using namespace std;
main()
  {
  while(true){
  string name;
  int discount;
  cout<<"Enter country name (in small letters):  ";
  cin>>name;
  int price;
    cout<<"Enter price in dollars:   ";
    cin>> price;
  if( name== "pakistan")
    {
    discount= price -(price/100)*5;
    cout<<"Final price:  "<<discount<<endl;
    }
    if( name== "ireland")
    {
    discount= price -(price/100)*10;
    cout<<"Final price:  "<<discount<<endl;
    }
    if( name== "india")
    {
    discount= price -(price/100)*15;
    cout<<"Final price:  "<<discount<<endl;
    }
    if( name== "england")
    {
    discount= price -(price/100)*20;
    cout<<"Final price:  "<<discount<<endl;
    }
  }
  }
#include <iostream>
#include <windows.h>
using namespace std;
main()
  {
  system("cls");
  while(true){
  int num1;
  int num2;
  int num3;
  float originalPrice;
  float discount;
  cout<<"Enter the number of red roses:  ";
  cin>>num1;
  cout<<"Enter the number of white roses:  ";
  cin>>num2;
  cout<<"Enter the number of tulip roses:  ";
  cin>>num3;
  float ans1;
  float ans2;
  float ans3;
  ans1= num1*2.00;
  ans2= num2*4.10;
  ans3= num3*2.5;
  originalPrice= ans1+ans2+ans3;
   cout<<"original Price:  "<<originalPrice<<endl;
  if(originalPrice>200)
    {
    discount=originalPrice-(originalPrice/100)*20;
    cout<<"Price after discount:  "<<discount<<endl;
    }
  }
  }
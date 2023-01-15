#include <iostream>
using namespace std;
string checkSpeed(float speed);
main()
     {
	float speed;

	cout<<"Enter speed: ";
	cin>>speed;

	string result=checkSpeed(speed);
	cout<<""<<result;

     }
     string checkSpeed(float speed)
        {
	string comment;
	if(speed<=10)
	{
         comment="slow"; 
	}
	else if(speed>10 && speed<=50)
	{
	   comment="average";
	}
	else if(speed>50 && speed<=150)
	{
	comment="fast";
	}
	else if(speed>150 && speed<=1000)
	{
	comment="ultra fast";
	}
	else if(speed>1000)
	{
	comment="extreamly fast";
	}
	return comment;
	}
	

      
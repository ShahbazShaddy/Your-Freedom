#include <iostream>
#include <cmath>
using namespace std;
void height(float angle,float base);
main()
{ 
float base,angle;
cout <<"Enter angle of inclination in degrees: ";
cin>>angle;
cout <<"Enter Base in feet: ";
cin>>base;
cout<<"1 Radian=57.2958 degrees"<<endl;
height(angle,base);
}
void height(float angle,float base){
float inradian,height;
angle=angle/57.2958;
inradian=tan(angle);
height=inradian*base;
cout <<"Height= "<<height<<endl;
}
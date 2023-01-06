#include <iostream>
#include <cmath>
using namespace std;
main()
{
float angle,angleinradian;
cout<<"Enter Angle in degrees :";
cin>>angle;
angleinradian=angle/(57.2957795);
cout<<"Sin of "<<angle<<" = "<<sin(angleinradian)<<endl;
}
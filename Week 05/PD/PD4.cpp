#include <iostream>
using namespace std;
float length, width, height;
string unit;
int calculate1();
int calculate2();
int calculate3();
main()
{
    cout << "Enter length(m): ";
    cin >> length;
    cout << "Enter width(m): ";
    cin >> width;
    cout << "Enter height(m): ";
    cin >> height;
    cout << "Enter unit(cubic_mm,cubic_cm,cubic_m,cubic_km): ";
    cin >> unit;
    float result1=calculate1()/3;
    cout << "Volume of Pyramid:" <<result1;
    float result2=calculate2()/3;
    cout << "Volume of Pyramid:" <<result2; 
    float result3=calculate3()/3;
    cout << "Volume of Pyramid:" <<result3;   
}
int calculate1()
    {

    if (unit == "cubic_mm")
    {
    float resultInmm=(length*width*height)*1000;
        return resultInmm;
    }

    }
    int calculate2()
    {

    if (unit == "cubic_cm")
    {
    float resultIncm=(length*width*height)*100;
    return resultIncm;
    }

    }
        int calculate3()
    {

    if (unit == "cubic_km")
    {
    float resultInkm=(length*width*height)*0.001;
    return resultInkm;
    }

    }


#include <iostream>
#include <cmath>
using namespace std;

void positivex(float x,float a,float b,float c);
void negativex(float x,float a,float b,float c);
main()
{
float a,b,c;
float x;
cout<<"        ax2 + bx + c = 0    "<<endl;
cout<<"Enter value of a= ";
cin>>a;
cout<<"Enter value of b= ";
cin>>b;
cout<<"Enter value of c= ";
cin>>c;
positivex(x,a,b,c);
negativex(x,a,b,c);
}

void positivex(float x,float a,float b,float c){
float squareroot=sqrt((b*b)-(4*a*c));
x=(-b+squareroot)/(2*a);
cout <<"Value of x= "<<x<<endl;
}

void negativex(float x,float a,float b,float c){
float squareroot=sqrt((b*b)-(4*a*c));
x=(-b-squareroot)/(2*a);
cout <<"Value of x= "<<x<<endl;
}
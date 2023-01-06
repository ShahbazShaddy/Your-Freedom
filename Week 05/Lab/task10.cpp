#include <iostream>
#include <cmath>
float multiply(float num1); 
using namespace std;
main()
{
float num1;
cout<<"Enter number 1: ";
cin>>num1;
cout<<""<<multiply(num1);


}

float multiply(float num1){
return num1*5;
}
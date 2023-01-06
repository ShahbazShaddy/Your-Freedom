#include <iostream>
#include <cmath>
using namespace std;
string isevenish(int number);
main()
{
int number;
cout<<"Enter 5 digit number: ";
cin>>number;

isevenish(number);

}


string isevenish(int number){
int num1,num2,num3,num4,num5,sum;
num1=number%10;
number=number/10;
num2=number%10;
number=number/10;
num3=number%10;
number=number/10;
num4=number%10;
number=number/10;
num5=number%10;
number=number/10;
sum=num1+num2+num3+num4+num5;
cout<<"Sum= "<<sum<<endl;
if(sum%2==0)
 {
cout<<"Number is evenish"<<endl;
 }
if(sum%2!=0)
 {
cout<<"Number is oddish"<<endl;
 }
}



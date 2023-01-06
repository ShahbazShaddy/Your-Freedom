#include <iostream>
#include <cmath>
using namespace std;
bool issymmetrical(int number);
main()
{
int number;
cout <<"Enter 3 digit number:";
cin>>number;
issymmetrical(number);





}

bool issymmetrical(int number){
int num1,num2,num3;

num1=number%10;
number=number/10;
num2=number%10;
number=number/10;
num3=number%10;


if(num1==num3)
 {
cout<<"Value is Symmetric"<<endl;
 }
if(num1!=num3)
 {
cout<<"Value is not Symmetric"<<endl;
 }

}
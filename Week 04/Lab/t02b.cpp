#include <iostream>
using namespace std;
void add(int number1,int number2);
void subtract(int number1,int number2);
void multiply(int number1,int number2);
void divide(int number1,int number2);
main()
{
int number1;
int number2;
char sign;
cout<<"Enter Number1: ";
cin>>number1;
cout<<"Enter Number2: ";
cin>>number2;
cout<<"Enter Operator: ";
cin>>sign;
if(sign == '+')
{
add(number1,number2);
}
if(sign == '-')
{
subtract(number1,number2);
}
if(sign == '*')
{
multiply(number1,number2);
}
if(sign == '/')
{
divide(number1,number2);
}
}

void add(int number1,int number2)
{
cout<<"Sum: "<<number1+number2;
}
void subtract(int number1,int number2)
{
cout<<"Subtraction: "<<number1-number2;
}
void multiply(int number1,int number2)
{
cout<<"Multiplication: "<<number1*number2;
}
void divide(int number1,int number2)
{
cout<<"division: "<<number1/number2;
}


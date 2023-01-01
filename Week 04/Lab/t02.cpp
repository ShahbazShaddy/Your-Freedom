#include <iostream>
using namespace std;
void result(int number1,int number2);
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
result(number1,number2);
}
}

void result(int number1,int number2)
{
cout<<"Sum: "<<number1+number2;
}


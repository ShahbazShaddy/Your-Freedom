#include <iostream>
using namespace std;
void max(int number1,int number2);
void min(int number1,int number2);
main()
{
int number1;
int number2;
cout<<"Enter Number1: ";
cin>>number1;
cout<<"Enter Number2: ";
cin>>number2;
if(number1 > number2)
{
max(number1,number2);
}
if(number2 > number1)
{
min(number1,number2);
}
}
void max(int number1,int number2)
{
cout<<"Greater number: "<<number1<<endl;
}
void min(int number1,int number2)
{
cout<<"Greater number: "<<number2;
}

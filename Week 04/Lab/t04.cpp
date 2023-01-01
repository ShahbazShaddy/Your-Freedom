#include <iostream>
using namespace std;
void even(int number);
void odd(int number);
main()
{
int number;
cout<<"Enter Number: ";
cin>>number;
if(number % 2 == 0)
{
even(number);
}
if(number % 2 != 0)
{
odd(number);
}
}
void even(int number)
{
cout<<"Even"<<endl;
}
void odd(int number)
{
cout<<"Odd";
}

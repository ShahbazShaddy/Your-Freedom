#include <iostream>
using namespace std;
void result1(int number);
void result2(int number);
main()
{
int number;
cout<<"Enter Number: ";
cin>>number;
if(number >= 51)
{
result1(number);
}
if(number <= 50)
{
result2(number);
}
}
void result1(int number)
{
cout<<"Passed"<<endl;
}
void result2(int number)
{
cout<<"Faild";
}

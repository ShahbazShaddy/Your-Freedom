#include <iostream>
using namespace std;
void calculateBill(string day,int amount);

main()
{
string day;
int amount;


cout<<"Enter Day: ";
cin>>day;
cout<<"Enter total amount: ";
cin>>amount;
if(day == "sunday")
{
calculateBill(day,amount);
}
if(day!="sunday")
{
cout<<"Sorry there is no discount today you have to pay "<<amount<<endl;
}
}
void calculateBill(string day,int amount)
{
int afterDiscount;
afterDiscount=amount-((amount*10)/100);
cout<<"Total after discount: "<<afterDiscount;
}

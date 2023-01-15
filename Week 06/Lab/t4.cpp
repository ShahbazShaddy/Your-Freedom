#include <iostream>
using namespace std;
float totalIncome(string name,int row,int column);
main()
{
    string name;
    int row,column;
    cout<<"Enter type of screening:";
    cin>>name;
    cout<<"Enter number of rows:";
    cin>>row;
    cout<<"Enter number of column:";
    cin>>column;
    float output=totalIncome(name,row,column);
    cout<<"Total income from tickets is "<<output;

}
float totalIncome(string name,int row,int column)
{
    float result;
    if(name=="premiere")
    {
        result=row*column*12;
        return result;
    }
    if(name=="normal")
    {
        result=row*column*7.5;
        return result;
    }
    if(name=="discount")
    {
        result=row*column*5;
        return result;
    }
}
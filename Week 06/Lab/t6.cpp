#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<cmath>
#include<windows.h>
using namespace std;
float check_cost(string city, string product,int quantity);
int quantity;
string city;
string product;
main()
{
    system("cls");
    cout<<"Enter the name of city(sofia,plovdiv,varna): ";
    cin>>city;
    cout<<"Enter the name of product: ";
    cin>>product;
    cout<<"Enter the quantity: ";
    cin>>quantity;
    float ans;
    ans=check_cost(city, product, quantity);
    cout<<"The amount to paid is:"<<ans<<endl;
}
float check_cost(string city, string product,int quantity)
{
    float amount;
    if(city=="sofia")
    {
        if (product=="coffee")
        {
            amount = 0.5* quantity;
        }
        if (product=="water")
        {
            amount=0.8*quantity;
        }
        if (product=="beer")
        {
            amount= 1.20*quantity;
        }
        if (product=="sweets")
        {
            amount=1.45*quantity;
        }
        if (product=="peanuts")
        {
            amount=1.6*quantity;
        }
    }
    if (city=="plovdiv")
    {
        if (product=="coffee")
        {
            amount = 0.4* quantity;
        }
        if (product=="water")
        {
            amount=0.7*quantity;
        }
        if (product=="beer")
        {
            amount= 1.15*quantity;
        }
        if (product=="sweets")
        {
            amount=1.30*quantity;
        }
        if (product=="peanuts")
        {
            amount=1.50*quantity;
        }
    }
    if(city=="varna")
    {
        if (product=="coffee")
        {
            amount = 0.45* quantity;
        }
        if (product=="water")
        {
            amount=0.70*quantity;
        }
        if (product=="beer")
        {
            amount= 1.10*quantity;
        }
        if (product=="sweets")
        {
            amount=1.35*quantity;
        }
        if (product=="peanuts")
        {
            amount=1.55*quantity;
        }
    }
    return amount;
}
#include <iostream>
using namespace std;
main(){
float bagSize;
float cost;
float area;
float costPerPound;
float costPerSquareFeet;

cout <<"Enter Bag Size in Pounds: " ;
cin >> bagSize;
cout <<"Enter Cost Of The Bag: ";
cin >> cost;
cout <<"Enter Area Covered By Each Bag In Square Feet: ";
cin >> area;
costPerPound = cost / bagSize;
cout <<"Cost Of Fertilizer Per Pound: " <<costPerPound <<endl;
costPerSquareFeet = cost / area;
cout<<"Cost Of Fertilizing The Area Per Square Feet: " <<costPerSquareFeet;

}
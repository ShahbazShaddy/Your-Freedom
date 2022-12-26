#include <iostream>
using namespace std;
main(){
float vegetable;
float fruit;
int totalKgVegetable;
int totalKgFruit;
float totalEarning;
float inRupees;

cout <<"Enter Vegetable Price Per Kilograms: " ;
cin >> vegetable;
cout <<"Enter Fruit Price Per Kilograms: ";
cin >> fruit;
cout <<"Enter Total Kilograms Of Vegetables: ";
cin >> totalKgVegetable;
cout <<"Enter Total Kilograms Of Fruits: ";
cin >> totalKgFruit;

totalEarning = ( vegetable * totalKgVegetable ) + ( fruit * totalKgFruit )  ;
inRupees = 1.94 * totalEarning ;
cout <<"Earning Of All Fruits And Vegetables in Rps: " << inRupees ;

}
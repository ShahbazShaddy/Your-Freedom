#include <iostream>
using namespace std;
main(){

string name;
float matric;
float inter;
float ecat;
float aggre;

cout <<"Enter Student Name: ";
cin >> name;
cout <<"Enter Marks In Matric: ";
cin >> matric;
cout <<"Enter Marks In Intermediate";
cin >> inter;
cout <<"Enter Marks In ECAT:";
cin >> ecat;
aggre = ( matric / 1100 ) * 10 + ( inter / 1100 ) * 40 + ( ecat / 400 ) * 50 ;
cout <<"Aggregate: " << aggre;


}
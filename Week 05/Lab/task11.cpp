#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
string isCapital(string character);
main()
{
string character;
cout<<"Enter the Alphabet A or a : ";
cin>>character;

cout<<isCapital(character)<<endl;

} 

string isCapital(string character){
if (character == "a")
 {
return "You have entered small a";
 }
if (character == "A")
 {
return "You have entered Capital A";
 }


}
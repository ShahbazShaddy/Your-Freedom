#include <iostream>
using namespace std;
main(){

int number;
int mod1;
int mod2;
int mod3;
int mod4;
int ans1;
int ans2;
int ans3;
int ans4;
int output;

cout <<"Enter 4-digit numbers: ";
cin >> number;
mod1 = number % 10;
ans1 = number / 10;
mod2 = ans1 % 10;
ans2 = ans1 / 10;
mod3 = ans2 % 10;
ans3 = ans2 / 10;
mod4 = ans3 % 10;
ans4 = ans3 /10;
output = mod1 + mod2 + mod3 + mod4 ;
cout <<"Sum of individual digits: " << output;

}
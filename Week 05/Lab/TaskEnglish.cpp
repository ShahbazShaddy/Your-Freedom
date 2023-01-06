#include <iostream>
using namespace std;
void fn(int number);
void fn1(int number);
main()
{
int number,digit1,digit2;

cout<<"Enter number: ";
cin>>number;
digit2=number%10;
digit1=number/10;



fn(digit1);
fn1(digit2);


}


			void fn(int number){

if(number==2){
cout<<"twenty";
}

if(number==3){
cout<<"thirty";
}

if(number==4){
cout<<"forty";
}

if(number==5){
cout<<"fifty";
}

if(number==6){
cout<<"sixty";
}
if(number==7){
cout<<"seventy";
}

if(number==8){
cout<<"eighty";
}
 if(number==9){
cout<<"ninty";
}

			}

void fn1(int number){
if(number==1){
cout<<" one"<<endl;
}
if(number==2){
cout<<" two"<<endl;
}

if(number==3){
cout<<" three"<<endl;
}

if(number==4){
cout<<" four"<<endl;
}

if(number==5){
cout<<" five"<<endl;
}

if(number==6){
cout<<" six"<<endl;
}
if(number==7){
cout<<" seven"<<endl;
}

if(number==8){
cout<<" eight"<<endl;
}
 if(number==9){
cout<<" nine"<<endl;
}




}
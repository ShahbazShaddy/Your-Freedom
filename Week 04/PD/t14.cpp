#include <iostream>
using namespace std;
void printMenu();

main(){
system("cls");

int choice;
string name1;
string name2;
string temp;
float matric1;
float matric2;
float inter1;
float inter2;
float ecat1;
float ecat2;
float aggregate1;
float aggregate2;

while(true){
printMenu();
cout<<"Enter your choice: ";
cin>>choice;
if(choice=1){

cout <<"Enter Student Name: ";
cin >> name1;
cout <<"Enter Marks In Matric: ";
cin >> matric1;
cout <<"Enter Marks In Intermediate: ";
cin >> inter1;
cout <<"Enter Marks In ECAT:";
cin >> ecat1;
cout<<"Enter c to continue"<<endl;
cin>>temp;
}

if(choice=2){

cout <<"Enter Student Name: ";
cin >> name2;
cout <<"Enter Marks In Matric: ";
cin >> matric2;
cout <<"Enter Marks In Intermediate: ";
cin >> inter2;
cout <<"Enter Marks In ECAT:";
cin >> ecat2;
cout<<"Enter c to continue"<<endl;
cin>>temp;
}
if(choice=3){
aggregate1 = ( matric1 / 1100 ) * 30 + ( inter1 / 550 ) * 30 + ( ecat1 / 400 ) * 40 ;
cout <<"Aggregate of "<<name1<<" is "<< aggregate1<<endl;
cout<<"Enter c to continue"<<endl;
cin>>temp;
}
if(choice=4){

aggregate2 = ( matric2 / 1100 ) * 30 + ( inter2 / 550 ) * 30 + ( ecat2 / 400 ) * 40 ;
cout <<"Aggregate of "<<name2<<" is "<<aggregate2<<endl;
cout<<"Enter c to continue"<<endl;
cin>>temp;
}
if(choice=5){
  if(ecat1>ecat2)
  {
  cout<<"Roll number 1 is "<<name1<<endl;
  cout<<"Roll number 2 is "<<name2<<endl;
  }
  if(ecat2>ecat1)
  {
  cout<<"Roll number 1 is "<<name2<<endl;
  cout<<"Roll number 2 is "<<name1<<endl;
  }
}
}}
void printMenu(){

cout<<"******************************************"<<endl;
cout<<"*         University Admission           *"<<endl;
cout<<"*              Management                *"<<endl;
cout<<"*                System                  *"<<endl;
cout<<"******************************************"<<endl;
cout <<"Main Menu"<<endl;
cout <<"--------------------------------------"<<endl;
cout <<"Press 1 to enter first student details"<<endl;
cout <<"Press 2 to enter second student details"<<endl;
cout <<"Press 3 to calculate the aggregate of first student"<<endl;
cout <<"Press 4 to calculate the aggregate of second student"<<endl;
cout <<"Press 5 to display student's roll number"<<endl;
}



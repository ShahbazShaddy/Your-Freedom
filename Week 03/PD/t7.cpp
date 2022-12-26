#include <iostream>
using namespace std;
main(){
string movie;
int adult;
int child;
int adultTicketSold;
int childTicketSold;
float percentage;
int totalAmount;
int afterDonation;

cout <<"Enter Movie Name: " ;
cin >> movie;
cout <<"Enter Adult Ticket Price: ";
cin >> adult;
cout <<"Enter Child Ticket Price: ";
cin >> child;
cout <<"Enter Number Of Adult Ticket Sold: ";
cin >> adultTicketSold;
cout <<"Enter Number Of Child Ticket Sold: ";
cin >> childTicketSold;
cout <<"Enter Percentage Of Donation: ";
cin >> percentage;
totalAmount = ( adultTicketSold * adult ) + ( childTicketSold * child ) ;
cout <<"Total Amount Generated: " <<totalAmount <<endl;
afterDonation = totalAmount - ( totalAmount * percentage ) / 100 ;
cout<<"Amount After Donation: " <<afterDonation;

}
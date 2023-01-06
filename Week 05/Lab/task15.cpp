#include <iostream>
#include <windows.h>
using namespace std;
main()
{
float hours,volume;
int flowrate1,flowrate2,finalvolume,nhours1,nhours2;
cout<<"Enter the volume of pool: ";
cin>>volume;
cout<<"Enter the flowrate of pipe 1 per hour: ";
cin>>flowrate1;
cout<<"Enter the flowrate of pipe 2 per hour: ";
cin>>flowrate2;
cout<<"Enter Hours: ";
cin>>hours;
nhours1=hours*flowrate1;
nhours2=hours*flowrate2;
finalvolume=(nhours1)+(nhours2);
if(volume>finalvolume)
 {
float percentage;

percentage=(finalvolume/volume)*100;
cout<<"The pool is "<<percentage<<"% full."<<endl;
cout<<"Percentafe of pipe1 : "<<(nhours1*100)/finalvolume<<"%"<<endl;
cout<<"Percentage of pipe2 : "<<((nhours2*100)/finalvolume)<<"%"<<endl;
 }


if(finalvolume>volume){
finalvolume=finalvolume-volume;
cout<<"For "<<hours<<" hours the pool overflows with "<<finalvolume<<"litres"<<endl;

}





}
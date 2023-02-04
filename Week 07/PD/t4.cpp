#include <iostream>
using namespace std;
void amplify(int num);

main()
{
int num;
cout<<"Enter number to amplify:";
cin>>num;
amplify(num);;

}
void amplify(int num)
{
for(int i=1;i<=num;i++)
{
    if(i%4==0)
    {
   
    cout<<i*10<<",";
    
    continue;
    
    }

cout<<i<<",";
}

}

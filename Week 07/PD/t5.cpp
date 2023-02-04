#include <iostream>
using namespace std;
void triangle(int num);

main()
{
int num;
cout<<"Enter triangle number:";
cin>>num;
triangle(num);;

}
void triangle(int num)
{
    int add=0;
    
for(int i=1;i<=num;i++)
{
    add=add+i;   
}
cout<<add;

}



#include <iostream>
using namespace std;
void nestedFor(int row);
main()
{
int row;
cout<<"Enter derired number of rows:";
cin>>row;
nestedFor(row);

}
void nestedFor(int row)
{
for(int i=1;i<=row;i++)
{
for(int j=row;j>=i;j--)
{
cout<<"*";
}
cout<<endl;
}
}
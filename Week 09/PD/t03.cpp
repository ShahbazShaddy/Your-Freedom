#include <iostream>
using namespace std;
main()
{
string word;
cout<<"Enter a word: ";
cin>>word;
int len=word.length();
if(len%2==0)
{
    cout<<"True";
}
else
cout<<"False";
}

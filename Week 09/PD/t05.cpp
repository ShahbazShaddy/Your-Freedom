#include <iostream>
using namespace std;
main()
{
    int arrSize=4;
    string word[arrSize];
    
    for (int index = 0; index < 4; index++)
    {
    cout<<"Enter word:";
    cin>>word[index];
    }
    if(word[0]==word[1] && word[1]==word[2] && word[2]==word[3] && word[0]==word[3])
    {
        cout<<"True";
    
    }
    else
    cout<<"Flase";
    
    
}
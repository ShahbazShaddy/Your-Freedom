#include <iostream>
using namespace std;
main()
{
    int arrSize=0;

    cout<<"Enter array size:";
    cin>>arrSize;
    int num[arrSize];
    int addSub;
    int output;
    cout<<"Enter number of times even-odd transformation need to be done:";
    cin>>addSub;
    for (int index = 0; index < arrSize; index++)
    {
        cout<<"Enter number:";
        cin>>num[index];
    }
    for (int index = 0; index < arrSize; index++)
    {
    if (num[index]%2==0)
    {
        output=num[index]-(addSub*2);  
    }
    if (num[index]%2!=0)
    {
        output=num[index]+(addSub*2);
    }
    cout<<output<<endl;
    }
}
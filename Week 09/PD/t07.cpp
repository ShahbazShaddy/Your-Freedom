#include <iostream>
using namespace std;


main()
{
    char string1[] = "word1";
    char string2[] = "word2";
    int count = 0;

    cout<<"Enter 1st string: ";
    cin>>string1;
    
    cout<<"Enter 2nd string: ";
    cin>>string2;

    for (int x = 0; string1[x] != '\0'; x++)
    {
        for(int y = count; string2[y] != '\0';y++)
        {
            if(string1[x]==string2[y])
            {
                count++;

                break;
            }
        }
    }
    cout<<count;
}
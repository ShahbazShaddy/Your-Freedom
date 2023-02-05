#include<iostream>
using namespace std;
# include<conio.h>

main()
{
    
    int checknum;
    char numchar[10] = {'0','1','2','3','4','5','6','7','8','9'};
    string pin;
    cout << "Enter 4 digit pin: ";
    cin >> pin;
    if (pin.length() > 4)
    {
        cout << "Invalid input";
        getch();
        return 0;
    }
    for (int i =0; i<4; i++)
    {
        checknum = 0;
        char temp = pin[i];
        for (int j = 0; j < 10; j++)
        {
            if (temp == numchar[j])
            {
                checknum++;
            }
        }
        if (checknum == 0)
        {
            cout << "Invalid input";
            getch();
            return 0;
        }
    }

    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    string pinnum[4];

    int intPin[4];

    for (int i =0; i<4; i++)
    {
        char temp = pin[i];
        for (int j = 0; j < 10; j++)
        {
            if (temp == numchar[j])
            {
                intPin[i] = j;
            }
        }
    }

    intPin[1] +=  1;
    intPin[2] +=  2;
    intPin[3] +=  3;

    for (int i =0; i<4; i++)
    {
        if (intPin[i] > 9)
        {
            intPin[i] -=10;
        }
    }

    cout << moves[intPin[0]] << " "  << moves[intPin[1]] << " "  << moves[intPin[2]] << " "  << moves[intPin[3]];   
    getch();
}
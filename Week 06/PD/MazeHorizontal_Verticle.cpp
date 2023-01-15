#include <iostream>
#include <windows.h>
using namespace std;
void printMaze();
void printPacman(int x, int y);
void printGost(int x,int y);
void printGost2(int x,int y);
void gotoxy(int x, int y);
void remove(int x,int y);
void erase(int x, int y,char previous);
void erase2(int x, int y,char previous);
char getCharAtxy(short int x, short int y);

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
void remove(int x, int y)
{
    gotoxy(x, y);
    cout <<' ';
}
void erase(int x, int y,char previous)
{
    gotoxy(x, y);
    cout <<previous;
}
void erase2(int x, int y,char previous)
{
    gotoxy(x, y);
    cout <<previous;
}
void printGost(int x, int y)
{
    gotoxy(x, y);
    cout << "G";
}
void printGost2(int x, int y)
{
    gotoxy(x, y);
    cout << "G";
}
void printPacman(int x, int y)
{
    gotoxy(x, y);
    cout << "P";
}
void printMaze()
{
    cout << "                 $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   " << endl;
    cout << "                ||.. .....................................................................     .....   || " << endl;
    cout << "                ||.. [$$$$$$$$$$$$$$$$$$|          ...          |$$$$$$$$$$$$$$|     |$|..    |$$$$$|  || " << endl;
    cout << "                ||..         |$|      |$|       |$|...          |$|          |$|     |$|..        |$|  || " << endl;
    cout << "                ||..         |$|      |$|       |$|...          |$|          |$|     |$|..        |$|  || " << endl;
    cout << "                ||..         |$$$$$$$$$$|  . .  |$|...          :$$$$$$$$$$$$$$:        ..    |$$$$$|. || " << endl;
    cout << "                ||..         |$|           . .  |$|...         .................   |$|  ..           . || " << endl;
    cout << "                ||..         |$$$$$$$$$$$$|. .  |$|...         |$$$$$$$$$$$|       |$|  ..    |$$$$$|. || " << endl;
    cout << "                ||..                    |$|.                   |$|......           |$|  ..        |$|. || " << endl;
    cout << "                ||..      ...........   |$|.                   |$|......|$|             ..        |$|. || " << endl;
    cout << "                ||..|$|   |$|$$$$$|$| . |$|. |$|                  ......|$|             ..|$|     |$|. || " << endl;
    cout << "                ||..|$|   |$|     |$| ...    |$$$$$$$$$$$$$$$|    ......|$|              .|$|.         || " << endl;
    cout << "                ||..|$|   |$|     |$| ...             .....|$|       $$$$$|             . |$|.         || " << endl;
    cout << "                ||..|$|                ..             .....|$|                    |$|   ..|$|.         || " << endl;
    cout << "                ||..|$|   |$$$$$$$$$$$$$$$$$|         .....|$|$$$$$$$$$$$$|       |$|   ..|$|$$$$$$$$| || " << endl;
    cout << "                ||............................................................    |$|   .............  || " << endl;
    cout << "                ||   .........................................................             ..........  || " << endl;
    cout << "                ||..|$|   |$|     |$|..      |$$$$$$$$$$$$$$$|    .........|$|    |$|   ..|$|.         || " << endl;
    cout << "                ||..|$|   |$|     |$|..               .....|$|        |$$$$$$|    |$|   ..|$|.         || " << endl;
    cout << "                ||..|$|               .               .....|$|                    |$|   ..|$|.         || " << endl;
    cout << "                ||..|$|   |$$$$$$$$$$$$$$$$$|         .....|$|$$$$$$$$$$$$|       |$|   ..|$|$$$$$$$|  || " << endl;
    cout << "                ||...........................................................     |$|   .............  || " << endl;
    cout << "                ||  .........................................................             ...........  || " << endl;
    cout << "                ||$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$|| " << endl;
}
main()
{
    int gx=35;
    int gy=16;
    int g2x=80;
    int g2y=14;
    int x = 24;
    int y = 15;
    string direction="right";
    string direction2="up";
    char previousChar=' ';
    char previousChar2=' ';
    bool gameRun = true;
    system("cls");
    
    printMaze();
    printPacman(x, y);
    printGost(gx,gy);
    printGost2(g2x,g2y);
    while (gameRun)
    {

	if(direction2=="up")
	{
	char nextLocation2=getCharAtxy(g2x,g2y-1);
	if(nextLocation2=='$')
	{
	direction2="down";
	}
	else if(nextLocation2==' ' || nextLocation2=='.')
	{
	erase2(g2x,g2y,previousChar2);
	g2y=g2y-1;
	previousChar2=nextLocation2;
	printGost2(g2x,g2y);
	}
    }
        if(direction2=="down")
	{
	char nextLocation2=getCharAtxy(g2x,g2y+1);
	if(nextLocation2=='$')
	{
	direction2="up";
	}
	else if(nextLocation2==' ' || nextLocation2=='.')
	{
	erase2(g2x,g2y,previousChar2);
	g2y=g2y+1;
	previousChar2=nextLocation2;
	printGost2(g2x,g2y);
	}
	}
       
	if(direction=="right")
	{
	char nextLocation=getCharAtxy(gx+1,gy);
	if(nextLocation=='|' || nextLocation=='$')
	{
	direction="left";
	}
	else if(nextLocation==' ' || nextLocation=='.')
	{
	erase(gx,gy,previousChar);
	gx=gx+1;
	previousChar=nextLocation;
	printGost(gx,gy);
	}
	}
	if(direction=="left")
	{
	char nextLocation=getCharAtxy(gx-1,gy);
	if(nextLocation=='|' || nextLocation=='$')
	{
	direction="right";
	}
	else if(nextLocation==' ' || nextLocation=='.')
	{
	erase(gx,gy,previousChar);
	gx=gx-1;
	previousChar=nextLocation;
	printGost(gx,gy);
	}
	}
        if (GetAsyncKeyState(VK_LEFT))
        {
            char nextLocation = getCharAtxy(x - 1, y);
            if (nextLocation == ' ' || nextLocation == '.')
            {
                remove(x,y);
                x = x - 1;
                printPacman(x, y);
            }
        }
        if (GetAsyncKeyState(VK_UP))
        {
            char nextLocation = getCharAtxy(x, y - 1);
            if (nextLocation == ' ' || nextLocation == '.')
            {
                remove(x,y);
                y = y - 1;
                printPacman(x, y);
            }
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            char nextLocation = getCharAtxy(x, y + 1);
            if (nextLocation == ' ' || nextLocation == '.')
            {
                remove(x,y);
                y = y + 1;
                printPacman(x, y);
            }
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            char nextLocation = getCharAtxy(x + 1, y);
            if (nextLocation == ' ' || nextLocation == '.')
            {
                remove(x,y);
                x = x + 1;
                printPacman(x, y);
            }
        }
            if (GetAsyncKeyState(VK_ESCAPE))
            {
                gameRun = false;
            }
            Sleep(200);
        
    }
}
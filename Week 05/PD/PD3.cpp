#include <iostream>
#include <windows.h>
using namespace std;
void printMaze();
void printPacman(int x, int y);
void gotoxy(int x, int y);
void erase(int x, int y);
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
void erase(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}
void printPacman(int x, int y)
{
    gotoxy(x, y);
    cout << "P";
}
void printMaze()
{
    cout << "                 _______________________________________________________________________________________   " << endl;
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
    cout << "                ||..|$|               .        G      .....|$|                    |$|   ..|$|.         || " << endl;
    cout << "                ||..|$|   |$$$$$$$$$$$$$$$$$|         .....|$|$$$$$$$$$$$$|       |$|   ..|$|$$$$$$$|  || " << endl;
    cout << "                ||...........................................................     |$|   .............  || " << endl;
    cout << "                ||  .........................................................             ...........  || " << endl;
    cout << "                ||_____________________________________________________________________________________|| " << endl;
}
main()
{
    int x = 24;
    int y = 15;
    bool gameRun = true;
    system("cls");
    printMaze();
    printPacman(x, y);
    while (gameRun)
    {
        if (GetAsyncKeyState(VK_LEFT))
        {
            char nextLocation = getCharAtxy(x - 1, y);
            if (nextLocation == ' ' || nextLocation == '.')
            {
                erase(x, y);
                x = x - 1;
                printPacman(x, y);
            }
        }
        if (GetAsyncKeyState(VK_UP))
        {
            char nextLocation = getCharAtxy(x, y - 1);
            if (nextLocation == ' ' || nextLocation == '.')
            {
                erase(x, y);
                y = y - 1;
                printPacman(x, y);
            }
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            char nextLocation = getCharAtxy(x, y + 1);
            if (nextLocation == ' ' || nextLocation == '.')
            {
                erase(x, y);
                y = y + 1;
                printPacman(x, y);
            }
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            char nextLocation = getCharAtxy(x + 1, y);
            if (nextLocation == ' ' || nextLocation == '.')
            {
                erase(x, y);
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
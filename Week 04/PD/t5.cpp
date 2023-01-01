#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y){
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
main(){
system("cls");
gotoxy(1,15);
cout<<"    @@@@@@@@@"<<endl;
cout<<"    @@        "<<endl;
cout<<"     @@@  "<<endl;
cout<<"       @@@@@    "<<endl;
cout<<"           @@@  "<<endl;
cout<<"             @@  "<<endl;
cout<<"      @@@@@@@@@  "<<endl;
gotoxy(1,25);
cout<<"   @@      @@"<<endl;
cout<<"   @@      @@  "<<endl;
cout<<"   @@      @@"<<endl;
cout<<"   @@@@@@@@@@   "<<endl;
cout<<"   @@      @@ "<<endl;
cout<<"   @@      @@"<<endl;
cout<<"   @@      @@"<<endl;
gotoxy(1,35);
cout<<"       @@"<<endl;
cout<<"     @@  @@"<<endl;
cout<<"    @@    @@"<<endl;
cout<<"    @@@@@@@@"<<endl;
cout<<"    @@    @@"<<endl;
cout<<"    @@    @@"<<endl;
gotoxy(1,45);
cout<<"   @@      @@"<<endl;
cout<<"   @@      @@  "<<endl;
cout<<"   @@      @@"<<endl;
cout<<"   @@@@@@@@@@   "<<endl;
cout<<"   @@      @@ "<<endl;
cout<<"   @@      @@"<<endl;
cout<<"   @@      @@"<<endl;
gotoxy(1,55);
cout<<"    @@@@@@"<<endl;
cout<<"    @@    @"<<endl;
cout<<"    @@   @"<<endl;
cout<<"    @@@@@"<<endl;
cout<<"    @@   @"<<endl;
cout<<"    @@    @"<<endl;
cout<<"    @@@@@@"<<endl;
gotoxy(1,65);
cout<<"       @@"<<endl;
cout<<"     @@  @@"<<endl;
cout<<"    @@    @@"<<endl;
cout<<"    @@@@@@@@"<<endl;
cout<<"    @@    @@"<<endl;
cout<<"    @@    @@"<<endl;
gotoxy(1,75);
cout<<"    @@@@@@@@"<<endl;
cout<<"          @"<<endl;
cout<<"         @"<<endl;
cout<<"        @"<<endl;
cout<<"       @"<<endl;
cout<<"      @"<<endl;
cout<<"     @@@@@@@@"<<endl;

}
#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x,int y);
void printMaze();
void playerMove(int x, int y);


main()
{

     system("cls");
     printMaze();
int x=3;
int y=3;
while(true)
{
playerMove(x,y);
if(x=3)
if(y=4)


}

void printMaze()
{

cout<<"***************************"<<endl;
cout<<"*                         *"<<endl;
cout<<"*                         *"<<endl;
cout<<"*                         *"<<endl;
cout<<"*                         *"<<endl;
cout<<"*                         *"<<endl;
cout<<"*                         *"<<endl;
cout<<"*                         *"<<endl;
cout<<"***************************"<<endl;
}
void gotoxy(int x, int y)

{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

#include<iostream>
#include<windows.h>
using namespace std;
void a();
void b();
void c();

void gotoxy(int x, int y)
{COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
main(){
system("cls");
a();
b();
c();




}
void a(){
gotoxy(15,1);
cout<<"            $"<<endl;
gotoxy(15,2);
cout<<"          $   $"<<endl;
gotoxy(15,3);
cout<<"         $     $"<<endl;
gotoxy(15,4);
cout<<"        $       $"<<endl;
gotoxy(15,5);
cout<<"       $ * * * * $"<<endl;
gotoxy(15,6);
cout<<"      $           $"<<endl;
gotoxy(15,7);
cout<<"     $             $"<<endl;




}
void b(){
gotoxy(20,8);
cout<<"%"<<endl;
gotoxy(20,9);
cout<<"%"<<endl;
gotoxy(20,10);
cout<<"%"<<endl;
gotoxy(20,11);
cout<<"%"<<endl;
gotoxy(20,12);
cout<<"%"<<endl;
gotoxy(20,13);
cout<<"%"<<endl;
gotoxy(20,14);
cout<<"%"<<endl;
gotoxy(20,15);
cout<<"%"<<endl;
gotoxy(20,16);
cout<<"%%%%%%%%%%%%%%"<<endl;
}

void c(){
gotoxy(20,19);
cout<<"%"<<endl;
gotoxy(20,20);
cout<<"%"<<endl;
gotoxy(20,21);
cout<<"%"<<endl;
gotoxy(20,22);
cout<<"%"<<endl;
gotoxy(20,23);
cout<<"%"<<endl;
gotoxy(20,24);
cout<<"%"<<endl;
gotoxy(20,25);
cout<<"%"<<endl;
gotoxy(20,26);
cout<<"%"<<endl;
}



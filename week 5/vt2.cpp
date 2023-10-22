#include <iostream>
#include <windows.h>
using namespace std;

void printMenu();
void header();
void gotoxy(int x, int y);

main()
{

  system("cls");
  

  header();
  printMenu();
}
void header()
{

  
  gotoxy(1, 10);
  cout << "  ________________________________________________________________Pet Service Application___________________________________________________________________________  " << endl
       << endl;
  gotoxy(1, 12);
  cout << "  *****************************************************************************************************************************************************************  " << endl
       << endl;

  gotoxy(1, 14);
  cout << "                                                          \"BECAUSE THE PETS DESERVE THE BEST!\"                                                                   " << endl;
}
void printMenu()
{

  gotoxy(60, 15);
  cout << "_________________________________" << endl
       << endl;
  gotoxy(63, 17);
  cout << "1. View list of Veterinarians";
  gotoxy(63, 19);
  cout << "2. Add a new Veterinarian";
  gotoxy(63, 21);
 cout << "3. View Pet Owners"
       << endl;
        gotoxy(63, 23);
 cout << "4. Appointments"
       << endl;
  gotoxy(60, 25);
  cout << "_________________________________" << endl
       << endl;
  gotoxy(63, 27);
  cout << "Enter Your Requirement: ";
  int req;
  cin >> req;
}
void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
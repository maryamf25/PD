#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy (int x ,int y);

void printMaze();

void printEnemy3();
void eraseEnemy3();
void moveEnemy3();


int e3X = 2, e3Y = 2;
 main ()
 {
    system("cls");
    printMaze();
    
    printEnemy3();
	while(true){

		moveEnemy3();
		Sleep(500);

	}

	
 }
 void moveEnemy3(){
	eraseEnemy3();
	e3Y = e3Y + 1;
    e3X = e3X - 1;
	if( e3Y == 10 ){
       
        e3X=2;
		e3Y=2;
	}
	printEnemy3();
 }

 void printEnemy3(){

    gotoxy(e3X+100,e3Y);
    cout << "  ~~~  ";
    gotoxy(e3X+100,e3Y+1);
    cout << "{|'_'|}";
    gotoxy(e3X+100,e3Y+2);
    cout << " ^~~~^ ";
    gotoxy(e3X,e3Y+50);


 }
 void eraseEnemy3(){

     gotoxy(e3X+100,e3Y);
    cout << "       ";
    gotoxy(e3X+100,e3Y+1);
    cout << "       ";
    gotoxy(e3X+100,e3Y+2);
    cout << "       ";
    // gotoxy(eX,eY+50);
    }
 void printMaze(){
    
	cout<< "#######################################################################################################################" <<endl;
	cout<< "#                                                                                                                     #" <<endl;
	cout<< "#                                                                                                                     #" <<endl;
	cout<< "#                                                                                                                     #" <<endl;
	cout<< "#                                                                                                                     #" <<endl;
	cout<< "#                                                                                                                     #" <<endl;
	cout<< "#                                                                                                                     #" <<endl;
	cout<< "#                                                                                                                     #" <<endl;
	cout<< "#                                                                                                                     #" <<endl;
	cout<< "#                                                                                                                     #" <<endl;
	cout<< "#                                                                                                                     #" <<endl;
	cout<< "#                                                                                                                     #" <<endl;
	cout<< "#                                                                                                                     #" <<endl;
	cout<< "#                                                                                                                     #" <<endl;
	cout<< "#                                                                                                                     #" <<endl;
	cout<< "#                                                                                                                     #" <<endl;
    cout<< "#                                                                       ######################                        #" <<endl;
	cout<< "#                                                                       #                    #                        #" <<endl;
	cout<< "#                                                                       #                    #                        #" <<endl;
	cout<< "#                                                                       #                    #                        #" <<endl;
	cout<< "#                                                                       ######               #                        #" <<endl;
	cout<< "##############                                                               #               #                        #" <<endl;
	cout<< "             #                                                               #               #                        #" <<endl;
	cout<< "             #                                                               #################                        #" <<endl;
	cout<< "             #                                                                                                        #" <<endl;
	cout<< "##############                                                                                                        #" <<endl;
	cout<< "#                                                                                                                     #" <<endl;
	cout<< "#                                                                                                                     #" <<endl;
	cout<< "#                                                                                                                     #" <<endl;
    cout<< "#                                                                                                                     #" <<endl;
    cout<< "#                                                                                                                     #" <<endl;
	cout<< "#                                                                                                                     #" <<endl;
	cout<< "#                                                                                                                     #" <<endl;                         
    cout<< "#                                                                                                                     #" <<endl;
	cout<< "#                                                     #################################################################" <<endl;
    cout<< "#                                                     #                                                                " <<endl;
    cout<< "#                                                     #                                                                " <<endl;
	cout<< "#                                                     #################################################################" <<endl;
	cout<< "#                                                                                                                     #" <<endl;
	cout<< "#                                                                                                                     #" <<endl;
	cout<< "#                   ###################                                                                               #" <<endl;
	cout<< "#                   #                 #                                                                               #" <<endl;
	cout<< "#                   #                 #                                                                               #" <<endl;
	cout<< "#                   #                 #                                                                               #" <<endl;
	cout<< "#                   #                 #                                                                               #" <<endl;
	cout<< "####################                  #################################################################################" <<endl;
    
}
void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

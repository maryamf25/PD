#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);

void printHeader();
void printMaze();

void printEnemy();
void eraseEnemy();
void moveEnemy();

void printEnemy2();
void eraseEnemy2();
void moveEnemy2();

void printEnemy3();
void eraseEnemy3();
void moveEnemy3();

void printPlayer();
void movePlayerRight();
void movePlayerLeft();
void movePlayerUp();
void movePlayerDown();

int eX = 2, eY = 2;
int e2X = 27, e2Y = 17;
int e3X = 27, e3Y = 17;
int pX = 67, pY = 48;
main()
{
	system("cls");
	printHeader();
	printMaze();
	printPlayer();
	printEnemy();
	printEnemy2();
	printEnemy3();
	while (true)
	{

		if (GetAsyncKeyState(VK_RIGHT))
		{
			movePlayerRight();
		}
		if (GetAsyncKeyState(VK_UP))
		{
			movePlayerUp();
		}
		if (GetAsyncKeyState(VK_LEFT))
		{
			movePlayerLeft();
		}
		if (GetAsyncKeyState(VK_DOWN))
		{
			movePlayerDown();
		}

		moveEnemy();
		Sleep(200);

		moveEnemy2();
		Sleep(200);

		moveEnemy3();
		Sleep(200);
	}
}
// player;
void printPlayer()
{

	gotoxy(pX, pY);
	cout << "  _______  ";
	gotoxy(pX, pY + 1);
	cout << " | P - P |";
	gotoxy(pX, pY + 2);
	cout << "  \\_____/";
	gotoxy(pX, pY + 3);
	cout << "    |-|";
	gotoxy(pX, pY + 4);
	cout << "  *-   -*";
}
void erasePlayer()
{

	gotoxy(pX, pY);
	cout << "           ";
	gotoxy(pX, pY + 1);
	cout << "          ";
	gotoxy(pX, pY + 2);
	cout << "          ";
	gotoxy(pX, pY + 3);
	cout << "          ";
	gotoxy(pX, pY + 4);
	cout << "          ";
}
// player movement;
void movePlayerRight()
{
	if (getCharAtxy(pX + 12, pY) == ' ')
	{
		if (getCharAtxy(pX + 12, pY + 1) == ' ')
		{
			if (getCharAtxy(pX + 12, pY + 2) == ' ')
			{
				if (getCharAtxy(pX + 12, pY + 3) == ' ')
				{
					if (getCharAtxy(pX + 12, pY + 4) == ' ')
					{
						erasePlayer();
						pX = pX + 1;
						printPlayer();
					}
				}
			}
		}
	}
}
void movePlayerLeft()
{
	if (getCharAtxy(pX - 1, pY) == ' ')
	{
		if (getCharAtxy(pX - 1, pY + 1) == ' ')
		{
			if (getCharAtxy(pX - 1, pY + 2) == ' ')
			{
				if (getCharAtxy(pX - 1, pY + 3) == ' ')
				{
					if (getCharAtxy(pX - 1, pY + 4) == ' ')
					{
						erasePlayer();
						pX = pX - 1;
						printPlayer();
					}
				}
			}
		}
	}
}
void movePlayerUp()
{
	if (getCharAtxy(pX, pY - 1) == ' ')
	{
		if (getCharAtxy(pX + 1, pY - 1) == ' ')
		{
			if (getCharAtxy(pX + 2, pY - 1) == ' ')
			{
				if (getCharAtxy(pX + 3, pY - 1) == ' ')
				{
					if (getCharAtxy(pX + 4, pY - 1) == ' ')
					{
						if (getCharAtxy(pX + 5, pY - 1) == ' ')
						{
							if (getCharAtxy(pX + 6, pY - 1) == ' ')
							{
								if (getCharAtxy(pX + 7, pY - 1) == ' ')
								{
									if (getCharAtxy(pX + 8, pY - 1) == ' ')
									{
										if (getCharAtxy(pX + 9, pY - 1) == ' ')
										{
											if (getCharAtxy(pX + 10, pY - 1) == ' ')
											{
												if (getCharAtxy(pX + 11, pY - 1) == ' ')
												{

													erasePlayer();
													pY = pY - 1;
													printPlayer();
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
void movePlayerDown()
{
	if (getCharAtxy(pX, pY + 5) == ' ')
	{
		if (getCharAtxy(pX + 1, pY + 5) == ' ')
		{
			if (getCharAtxy(pX + 2, pY + 5) == ' ')
			{
				if (getCharAtxy(pX + 3, pY + 5) == ' ')
				{
					if (getCharAtxy(pX + 4, pY + 5) == ' ')
					{
						if (getCharAtxy(pX + 5, pY + 5) == ' ')
						{
							if (getCharAtxy(pX + 6, pY + 5) == ' ')
							{
								if (getCharAtxy(pX + 7, pY + 5) == ' ')
								{
									if (getCharAtxy(pX + 8, pY + 5) == ' ')
									{
										if (getCharAtxy(pX + 9, pY + 5) == ' ')
										{
											if (getCharAtxy(pX + 10, pY + 5) == ' ')
											{
												if (getCharAtxy(pX + 11, pY + 5) == ' ')
												{
													erasePlayer();
													pY = pY + 1;
													printPlayer();
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
//  enemy1;
void printEnemy()
{

	gotoxy(eX + 28, eY + 23);
	cout << "+_________+";
	gotoxy(eX + 28, eY + 24);
	cout << "!_-*-|-*-_!";
	gotoxy(eX + 28, eY + 25);
	cout << "   |- -|   ";
	gotoxy(eX + 28, eY + 26);
	cout << "   \\!!!/   ";
	// gotoxy(eX,eY+50);
}
void eraseEnemy()
{

	gotoxy(eX + 28, eY + 23);
	cout << "           ";
	gotoxy(eX + 28, eY + 24);
	cout << "           ";
	gotoxy(eX + 28, eY + 25);
	cout << "           ";
	gotoxy(eX + 28, eY + 26);
	cout << "            ";
	// gotoxy(eX,eY+50);
}

void moveEnemy()
{
	eraseEnemy();
	eX = eX + 2;
	if (eX == 50)
	{

		eX = 2;
	}
	printEnemy();
}

// enemy2;

void moveEnemy2()
{
	eraseEnemy2();
	e2Y = e2Y + 1;
	if (e2Y == 30)
	{

		e2Y = 17;
	}
	printEnemy2();
}

void printEnemy2()
{

	gotoxy(e2X, e2Y + 20);
	cout << "  \\---/  ";
	gotoxy(e2X, e2Y + 21);
	cout << "  (* *)";
	gotoxy(e2X, e2Y + 22);
	cout << "  _/ \\_";
	gotoxy(e2X, e2Y + 39);
}
void eraseEnemy2()
{

	gotoxy(e2X, e2Y + 20);
	cout << "         ";
	gotoxy(e2X, e2Y + 21);
	cout << "         ";
	gotoxy(e2X, e2Y + 22);
	cout << "         ";
}
//  enemy3;
void moveEnemy3()
{
	eraseEnemy3();
	e3Y = e3Y + 1;
	e3X = e3X - 6;
	if (e3Y == 22)
	{

		e3X = 27;
		e3Y = 17;
	}
	printEnemy3();
}

void printEnemy3()
{

	gotoxy(e3X + 100, e3Y);
	cout << "  ~~~  ";
	gotoxy(e3X + 100, e3Y + 1);
	cout << "{|'_'|}";
	gotoxy(e3X + 100, e3Y + 2);
	cout << " ^~~~^ ";
	gotoxy(e3X, e3Y + 50);
}
void eraseEnemy3()
{

	gotoxy(e3X + 100, e3Y);
	cout << "       ";
	gotoxy(e3X + 100, e3Y + 1);
	cout << "       ";
	gotoxy(e3X + 100, e3Y + 2);
	cout << "       ";
	
}
void printMaze()
{
	gotoxy(25, 15);
	cout << "#######################################################################################################################" << endl;
	gotoxy(25, 16);
	cout << "#         ________            #                                                                                       #" << endl;
	gotoxy(25, 17);
	cout << "#        /-------/)           #                                                                                       #" << endl;
	gotoxy(25, 18);
	cout << "#        ?   +    ?           #                                                                                       #" << endl;
	gotoxy(25, 19);                       
	cout << "#        |''''''''|           #                                                                                       #" << endl;
	gotoxy(25, 20);
	cout << "#        ----------           #                                                                                       #" << endl;
	gotoxy(25, 21);
	cout << "#                             #                                                                                       #" << endl;
	gotoxy(25, 22);
	cout << "#                             #                                                                                       #" << endl;
	gotoxy(25, 23);
	cout << "#                                                                                                                     #" << endl;
	gotoxy(25, 24);
	cout << "#                                                                       ######################                        #" << endl;
	gotoxy(25, 25);
	cout << "#                                                                       #                    #                        #" << endl;
	gotoxy(25, 26);
	cout << "#                                                                       #                    #                        #" << endl;
	gotoxy(25, 27);
	cout << "#                                                                       #                    #                        #" << endl;
	gotoxy(25, 28);
	cout << "#                                                                       ######               #                        #" << endl;
	gotoxy(25, 29);
	cout << "##############                                                               #               #                        #" << endl;
	gotoxy(25, 30);
	cout << "             #                                                               #               #                        #" << endl;
	gotoxy(25, 31);
	cout << "             ##############################                                  #################                        #" << endl;
	gotoxy(25, 32);
	cout << "             #                                                                                                        #" << endl;
	gotoxy(25, 33);
	cout << "##############                                                                                                        #" << endl;
	gotoxy(25, 34);
	cout << "#                                                                                                                     #" << endl;
	gotoxy(25, 35);
	cout << "#                                                                                                                     #" << endl;
	gotoxy(25, 36);
	cout << "#                                                                                                                     #" << endl;
	gotoxy(25, 37);
	cout << "#                                                                                                                     #" << endl;
	gotoxy(25, 38);
	cout << "#                                                                                                                     #" << endl;
	gotoxy(25, 39);
	cout << "#                                                                                                                     #" << endl;
	gotoxy(25, 40);
	cout << "#                                                                                                                     #" << endl;
	gotoxy(25, 41);
	cout << "#                                                                                                                     #" << endl;
	gotoxy(25, 42);
	cout << "#                                                                                                                     #" << endl;
	gotoxy(25, 43);
	cout << "#                                                     #################################################################" << endl;
	gotoxy(25, 44);
	cout << "#                                                     #                                                                " << endl;
	gotoxy(25, 45);
	cout << "#                                                     #                                                                " << endl;
	gotoxy(25, 46);
	cout << "#                                                     #################################################################" << endl;
	gotoxy(25, 47);
	cout << "#                                                                                                                     #" << endl;
	gotoxy(25, 48);
	cout << "#                                                                                                                     #" << endl;
	gotoxy(25, 49);
	cout << "#                   ###################                                                                               #" << endl;
	gotoxy(25, 50);
	cout << "#                   #                 #                                                                               #" << endl;
	gotoxy(25, 51);
	cout << "#                   #                 #                                                                               #" << endl;
	gotoxy(25, 52);
	cout << "#                   #                 #                                                                               #" << endl;
	gotoxy(25, 53);
	cout << "#                   #                 #                                                                               #" << endl;
	gotoxy(25, 54);
	cout << "####################                  #################################################################################" << endl;
}
void printHeader()
{

	gotoxy(25, 2);
	cout << "******  ******   ****  ****   ****        ******  ****      ******  **   **  ******   **** ****  ******  ****    **   ** " << endl;
	gotoxy(25, 3);
	cout << "******  ******   ****  ****   ******      ******  ******    ******  **   **  ******   **** ****  ******  ******  **   ** " << endl;
	gotoxy(25, 4);
	cout << "  **    **  **   **  **  **   **  **      **  **  **          **    **   **  **       **  ** **  **  **  **      **   **" << endl;
	gotoxy(25, 5);
	cout << "  **    **  **   **  **  **   **  **      **  **  **          **    **   **  **       **  ** **  **  **  **      **   **    " << endl;
	gotoxy(25, 6);
	cout << "  **    **  **   **      **   *****       **  **  ******      **    *******  ******   **     **  ******  ******  **** " << endl;
	gotoxy(25, 7);
	cout << "  **    **  **   **      **   *****       **  **  ******      **    *******  ******   **     **  ******  ******  **** " << endl;
	gotoxy(25, 8);
	cout << "  **    **  **   **      **   **  **      **  **  **          **    **   **  **       **     **  **  **      **  **   ** " << endl;
	gotoxy(25, 9);
	cout << "  **    **  **   **      **   **  **      **  **  **          **    **   **  **       **     **  **  **      **  **   ** " << endl;
	gotoxy(25, 10);
	cout << "  **    ******   **      **   ******      ******  **          **    **   **  *****    **     **  **  **  ******  **   ** " << endl;
	gotoxy(25, 11);
	cout << "  **    ******   **      **   *****       ******  **          **    **   **  *****    **     **  **  **    ****  **   ** " << endl;
}
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

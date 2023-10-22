#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);

void printHeader();
void printMaze();
void printscoreBox();
void increaseScore();
float score = 0;

void getMask();
void getMaskToLeft();
void getMaskToLeft2();
void printPlayerWithMask();
void printPlayerWithMask2();
void getMaskToRight();
void getMaskToUp();
void getMaskToDown();
// void getMaskToRight2();

void printEnemy();
void eraseEnemy();
void moveEnemy();
string directionOfe1 = "right";
string changeDirection1();

void printEnemy2();
void eraseEnemy2();
void moveEnemy2();
string directionOfe2 = "down";
string changeDirection2();

void printEnemy3();
void eraseEnemy3();
void moveEnemy3();
string directionOfe3 = "down";
string changeDirection3();

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
	printscoreBox();
	// increaseScore();
	printPlayer();
	getMask();
	printEnemy();
	printEnemy2();
	printEnemy3();
	while (true)
	{

		if (GetAsyncKeyState(VK_RIGHT))
		{
			movePlayerRight();
			// getMaskToRight();

			gotoxy(30, 57);

			cout << score;

			// getMaskToRight2();
		}
		if (GetAsyncKeyState(VK_UP))
		{
			movePlayerUp();
			getMaskToUp();
			gotoxy(30, 57);
			cout << score;
		}
		if (GetAsyncKeyState(VK_LEFT))
		{
			movePlayerLeft();
			getMaskToLeft();
			// increaseScore();
			gotoxy(30, 57);
			cout << score;

			// getMaskToLeft2();
		}
		if (GetAsyncKeyState(VK_DOWN))
		{
			movePlayerDown();
			getMaskToDown();
			gotoxy(30, 57);
			cout << score;
		}

		moveEnemy();
		directionOfe1 = changeDirection1();
		Sleep(100);

		moveEnemy2();
		directionOfe2 = changeDirection2();
		Sleep(100);

		moveEnemy3();
		directionOfe3 = changeDirection3();
		Sleep(100);
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
void printPlayerWithMask()
{

	gotoxy(pX, pY);
	cout << " _______  ";
	gotoxy(pX, pY + 1);
	cout << "| * - * |";
	gotoxy(pX, pY + 2);
	cout << " \\_____/";
	gotoxy(pX, pY + 3);
	cout << "   |-|";
	gotoxy(pX, pY + 4);
	cout << " *-   -*";
}
// void printPlayerWithMask2()
// {

// 	gotoxy(pX, pY);
// 	cout << "  _______  ";
// 	gotoxy(pX, pY + 1);
// 	cout << " | ^ ~ ^ |";
// 	gotoxy(pX, pY + 2);
// 	cout << "  \\_____/";
// 	gotoxy(pX, pY + 3);
// 	cout << "    |-|";
// 	gotoxy(pX, pY + 4);
// 	cout << "  *-   -*";
// }
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
	if (getCharAtxy(pX + 12, pY) ==' ')
	{
		if (getCharAtxy(pX + 12, pY + 1) ==' ')
		{
			if (getCharAtxy(pX + 12, pY + 2)==' ')
			{
				if (getCharAtxy(pX + 12, pY + 3) ==' ')
				{
					if (getCharAtxy(pX + 12, pY + 4) ==' ')
					{
						erasePlayer();
						pX = pX + 2;
						printPlayer();
					}
				}
			}
		}
	}
	if ((getCharAtxy(pX+9,pY+4) == '*') || (getCharAtxy(pX+9,pY+4) == '-'))
	{
		gotoxy(pX - 1, pY - 1);
		cout << pX  << pY ;
		erasePlayer();
		pX = pX + 3;
		printPlayerWithMask();
		score = score + 5;
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
						pX = pX - 3;
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
	if (directionOfe1 == "right")
	{
		eX = eX + 2;
	}
	if (directionOfe1 == "left")
	{
		eX = eX - 2;
	}

	printEnemy();
}
string changeDirection1()
{

	string cdirection1 = directionOfe1;
	if (eX == 30)
	{
		cdirection1 = "left";
	}
	else if (eX == 2)
	{
		cdirection1 = "right";
	}
	return cdirection1;
}
// enemy2;

void moveEnemy2()
{
	eraseEnemy2();
	if (directionOfe2 == "down")
	{
		e2Y = e2Y + 1;
	}
	if (directionOfe2 == "up")
	{
		e2Y = e2Y - 1;
	}
	printEnemy2();
}
string changeDirection2()
{

	string cdirection2 = directionOfe2;
	if (e2Y == 30)
	{
		cdirection2 = "up";
	}
	else if (e2Y == 17)
	{
		cdirection2 = "down";
	}
	return cdirection2;
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
	if (directionOfe3 == "down")
	{
		e3Y = e3Y + 1;
		e3X = e3X - 6;
	}
	if (directionOfe3 == "up")
	{

		e3Y = e3Y - 1;
		e3X = e3X + 6;
	}
	printEnemy3();
}

string changeDirection3()
{
	string cdirection3 = directionOfe3;
	if (e3Y == 20)
	{
		cdirection3 = "up";
	}
	else if (e3X == 27 && e3Y == 17)
	{
		cdirection3 = "down";
	}
	return cdirection3;
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
void printHeader()
{

	gotoxy(50, 2);
	cout << "******  ******   ****  ****   ****        ******  ****      ******  **   **  ******   **** ****  ******  ****    **   ** " << endl;
	gotoxy(50, 3);
	cout << "******  ******   ****  ****   ******      ******  ******    ******  **   **  ******   **** ****  ******  ******  **   ** " << endl;
	gotoxy(50, 4);
	cout << "  **    **  **   **  **  **   **  **      **  **  **          **    **   **  **       **  ** **  **  **  **      **   **" << endl;
	gotoxy(50, 5);
	cout << "  **    **  **   **  **  **   **  **      **  **  **          **    **   **  **       **  ** **  **  **  **      **   **    " << endl;
	gotoxy(50, 6);
	cout << "  **    **  **   **      **   *****       **  **  ******      **    *******  ******   **     **  ******  ******  **** " << endl;
	gotoxy(50, 7);
	cout << "  **    **  **   **      **   *****       **  **  ******      **    *******  ******   **     **  ******  ******  **** " << endl;
	gotoxy(50, 8);
	cout << "  **    **  **   **      **   **  **      **  **  **          **    **   **  **       **     **  **  **      **  **   ** " << endl;
	gotoxy(50, 9);
	cout << "  **    **  **   **      **   **  **      **  **  **          **    **   **  **       **     **  **  **      **  **   ** " << endl;
	gotoxy(50, 10);
	cout << "  **    ******   **      **   ******      ******  **          **    **   **  *****    **     **  **  **  ******  **   ** " << endl;
	gotoxy(50, 11);
	cout << "  **    ******   **      **   *****       ******  **          **    **   **  *****    **     **  **  **    ****  **   ** " << endl;
}
void printMaze()
{
	gotoxy(25, 15);
	cout << "###############################################################################################################################################################################" << endl;
	gotoxy(25, 16);
	cout << "#         ________            #                                                                                                                                               #" << endl;
	gotoxy(25, 17);
	cout << "#        /-------/)           #                                                                                                                                               #" << endl;
	gotoxy(25, 18);
	cout << "#        ?   +    ?           #                                                                                                                                               #" << endl;
	gotoxy(25, 19);
	cout << "#        |''''''''|           #                                                                                                                                               #" << endl;
	gotoxy(25, 20);
	cout << "#        ----------           #                                                                                                                                               #" << endl;
	gotoxy(25, 21);
	cout << "#                             #                                                                                                                                               #" << endl;
	gotoxy(25, 22);
	cout << "#                             #                                                                                                                                               #" << endl;
	gotoxy(25, 23);
	cout << "#                                                        %                                                                                                                    #" << endl;
	gotoxy(25, 24);
	cout << "#                                                        %              ######################                                                                                #" << endl;
	gotoxy(25, 25);
	cout << "#                                                        %              #                    #                                                                                #" << endl;
	gotoxy(25, 26);
	cout << "#                                                        %              #                    #                                                                                #" << endl;
	gotoxy(25, 27);
	cout << "#                                                        %              #                    #                                                                                #" << endl;
	gotoxy(25, 28);
	cout << "#                                                        %              ######               #                                                                                #" << endl;
	gotoxy(25, 29);
	cout << "##############                                           %                   #               #                                                                                #" << endl;
	gotoxy(25, 30);
	cout << "             #                                           %                   #               #                                                                                #" << endl;
	gotoxy(25, 31);
	cout << "             #################################################################################                                                                                #" << endl;
	gotoxy(25, 32);
	cout << "             #                           %                                                                                                                                    #" << endl;
	gotoxy(25, 33);
	cout << "##############                           %                                                                                                                                    #" << endl;
	gotoxy(25, 34);
	cout << "#                                        %                                                                                                                                    #" << endl;
	gotoxy(25, 35);
	cout << "#                                        %                                                                                                                                    #" << endl;
	gotoxy(25, 36);
	cout << "#                                        %                                                                                                                                    #" << endl;
	gotoxy(25, 37);
	cout << "#                                        %                                                                                                                                    #" << endl;
	gotoxy(25, 38);
	cout << "#                                                                                                                                                                             #" << endl;
	gotoxy(25, 39);
	cout << "#                                                                                                                                                                             #" << endl;
	gotoxy(25, 40);
	cout << "#                                                                                                                                                                             #" << endl;
	gotoxy(25, 41);
	cout << "#                                                                                                                                                                             #" << endl;
	gotoxy(25, 42);
	cout << "#                                                              %                                                                                                              #" << endl;
	gotoxy(25, 43);
	cout << "#                                                              %                            %                 #################################################################" << endl;
	gotoxy(25, 44);
	cout << "#                                                              %                            %                 #                                                                " << endl;
	gotoxy(25, 45);
	cout << "#                            %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%                            %                 #                                                                " << endl;
	gotoxy(25, 46);
	cout << "#                            %                                                              %                 #################################################################" << endl;
	gotoxy(25, 47);
	cout << "#                            %                                                              %                                                                                 #" << endl;
	gotoxy(25, 48);
	cout << "#                            %                                                              %                                                                                 #" << endl;
	gotoxy(25, 49);
	cout << "#                   ###################                                                     %                                                                                 #" << endl;
	gotoxy(25, 50);
	cout << "#                   #                 #                                                     %                                                                                 #" << endl;
	gotoxy(25, 51);
	cout << "#                   #                 #                                                     %                                                                                 #" << endl;
	gotoxy(25, 52);
	cout << "#                   #                 #                                                     %                                                                                 #" << endl;
	gotoxy(25, 53);
	cout << "#                   #                 #                                                     %                                                                                 #" << endl;
	gotoxy(25, 54);
	cout << "####################                  #########################################################################################################################################" << endl;
}
void printscoreBox()
{
	gotoxy(25, 56);
	cout << "----------------------------------------------------------------------------------------------------------------------";
	gotoxy(25, 57);
	cout << "|                                                                                                                    |";
	gotoxy(25, 58);
	cout << "|                                                                                                                    |";
	gotoxy(25, 59);
	cout << "----------------------------------------------------------------------------------------------------------------------";
	gotoxy(25, 60);
	cout << "SCORE";
}
void increaseScore()
{

	// gotoxy(30, 57);
	// cout << score;
	if ((getCharAtxy(pX - 1, pY) == '*') || (getCharAtxy(pX - 1, pY) == '-'))
	{
		score = score + 5;
	}
	else if ((getCharAtxy(pX - 1, pY + 1) == '*') || (getCharAtxy(pX - 1, pY + 1) == '-'))
	{
		score = score + 5;
	}
	else if ((getCharAtxy(pX - 1, pY + 2) == '*') || (getCharAtxy(pX - 1, pY + 2) == '-'))
	{
		score = score + 5;
	}
	else if ((getCharAtxy(pX - 1, pY + 3) == '*') || (getCharAtxy(pX - 1, pY + 3) == '-'))
	{
		score = score + 5;
	}
	else if ((getCharAtxy(pX - 1, pY + 4) == '*') || (getCharAtxy(pX - 1, pY + 4) == '-'))
	{
		score = score + 5;
	}
}
void getMask()
{

	gotoxy(50, 47);
	cout << "*-*";
	gotoxy(150, 53);
	cout << "*-*";
	gotoxy(40, 32);
	cout << "*-*";
}
void getMaskToLeft()
{
	if ((getCharAtxy(pX - 1, pY) == '*') || (getCharAtxy(pX - 1, pY) == '-'))
	{
		erasePlayer();
		pX = pX - 3;
		printPlayerWithMask();
		score = score + 5;
	}
	else if ((getCharAtxy(pX - 1, pY + 1) == '*') || (getCharAtxy(pX - 1, pY + 1) == '-'))
	{
		erasePlayer();
		pX = pX - 3;
		printPlayerWithMask();
		score = score + 5;
	}
	else if ((getCharAtxy(pX - 1, pY + 2) == '*') || (getCharAtxy(pX - 1, pY + 2) == '-'))
	{
		erasePlayer();
		pX = pX - 3;
		printPlayerWithMask();
		score = score + 5;
	}
	else if ((getCharAtxy(pX - 1, pY + 3) == '*') || (getCharAtxy(pX - 1, pY + 3) == '-'))
	{
		erasePlayer();
		pX = pX - 3;
		printPlayerWithMask();
		score = score + 5;
	}
	else if ((getCharAtxy(pX - 1, pY + 4) == '*') || (getCharAtxy(pX - 1, pY + 4) == '-'))
	{
		erasePlayer();
		pX = pX - 3;
		printPlayerWithMask();
		score = score + 5;
	}
}
// void getMaskToLeft2()
// {
// 	if ((getCharAtxy(pX - 1, pY) == '^') || (getCharAtxy(pX - 1, pY) == '~'))
// 	{
// 		erasePlayer();
// 		pX = pX - 3;
// 		printPlayerWithMask2();
// 	}
// 	else if ((getCharAtxy(pX - 1, pY + 1) == '^') || (getCharAtxy(pX - 1, pY + 1) == '~'))
// 	{
// 		erasePlayer();
// 		pX = pX - 3;
// 		printPlayerWithMask2();
// 	}
// 	else
// 	 if ((getCharAtxy(pX - 1, pY + 2) == '^') || (getCharAtxy(pX - 1, pY + 2) == '~') )
// 	{
// 		erasePlayer();
// 		pX = pX - 3;
// 		printPlayerWithMask2();
// 	}
// 	else
// 	 if ((getCharAtxy(pX - 1, pY + 3) == '^') || (getCharAtxy(pX - 1, pY + 3) == '~'))
// 	{
// 		erasePlayer();
// 		pX = pX - 3;
// 		printPlayerWithMask2();
// 	}
// 	else if ((getCharAtxy(pX - 1, pY + 4) == '^') || (getCharAtxy(pX - 1, pY + 4) == '~') )
// 	{
// 		erasePlayer();
// 		pX = pX - 3;
// 		printPlayerWithMask2();
// 	}
// }
void getMaskToRight()
{
	// if ((getCharAtxy(pX + 12, pY) == '*') || (getCharAtxy(pX + 12, pY) == '-'))
	// {
	// 	erasePlayer();
	// 	pX = pX + 1;
	// 	printPlayerWithMask();
	// }
	// else if ((getCharAtxy(pX + 12, pY + 1) == '*') || (getCharAtxy(pX + 12, pY + 1) == '-'))
	// {
	// 	erasePlayer();
	// 	pX = pX + 1;
	// 	printPlayerWithMask();
	// }
	// else if ((getCharAtxy(pX + 12, pY + 2) == '*') || (getCharAtxy(pX + 12, pY + 2) == '-'))
	// {
	// 	erasePlayer();
	// 	pX = pX + 1;
	// 	printPlayerWithMask();
	// }
	// else if ((getCharAtxy(pX + 12, pY + 3) == '*') || (getCharAtxy(pX + 12, pY + 3) == '-'))
	// {
	// 	erasePlayer();
	// 	pX = pX + 1;
	// 	printPlayerWithMask();
	// }
	// else

	if ((getCharAtxy(pX+10,pY+4) == '*') || (getCharAtxy(pX+10,pY+4) == '-'))
	{
		gotoxy(pX - 1, pY - 1);
		cout << pX  << pY ;
		erasePlayer();

		
		pX = pX + 3;
		
		printPlayerWithMask();
		score = score + 5;
	}
}
void getMaskToUp()
{
	if ((getCharAtxy(pX, pY - 1) == '*') || (getCharAtxy(pX, pY - 1) == '-'))
	{
		erasePlayer();
		pY = pY - 1;
		printPlayerWithMask();
		score = score + 5;
	}
	else if ((getCharAtxy(pX + 1, pY - 1) == '*') || (getCharAtxy(pX + 1, pY - 1) == '-'))
	{
		erasePlayer();
		pY = pY - 1;
		printPlayerWithMask();
		score = score + 5;
	}
	else if ((getCharAtxy(pX + 2, pY - 1) == '*') || (getCharAtxy(pX + 2, pY - 1) == '-'))
	{
		erasePlayer();
		pY = pY - 1;
		printPlayerWithMask();
		score = score + 5;
	}
	else if ((getCharAtxy(pX + 3, pY - 1) == '*') || (getCharAtxy(pX + 3, pY - 1) == '-'))
	{
		erasePlayer();
		pY = pY - 1;
		printPlayerWithMask();
		score = score + 5;
	}
	else if ((getCharAtxy(pX + 4, pY - 1) == '*') || (getCharAtxy(pX + 4, pY - 1) == '-'))
	{
		erasePlayer();
		pY = pY - 1;
		printPlayerWithMask();
		score = score + 5;
	}
	else if ((getCharAtxy(pX + 5, pY - 1) == '*') || (getCharAtxy(pX + 5, pY - 1) == '-'))
	{
		erasePlayer();
		pY = pY - 1;
		printPlayerWithMask();
		score = score + 5;
	}
	else if ((getCharAtxy(pX + 6, pY - 1) == '*') || (getCharAtxy(pX + 6, pY - 1) == '-'))
	{
		erasePlayer();
		pY = pY - 1;
		printPlayerWithMask();
		score = score + 5;
	}
	else if ((getCharAtxy(pX + 7, pY - 1) == '*') || (getCharAtxy(pX + 7, pY - 1) == '-'))
	{
		erasePlayer();
		pY = pY - 1;
		printPlayerWithMask();
		score = score + 5;
	}
	else if ((getCharAtxy(pX + 8, pY - 1) == '*') || (getCharAtxy(pX + 8, pY - 1) == '-'))
	{
		erasePlayer();
		pY = pY - 1;
		printPlayerWithMask();
		score = score + 5;
	}
	else if ((getCharAtxy(pX + 9, pY - 1) == '*') || (getCharAtxy(pX + 9, pY - 1) == '-'))
	{
		erasePlayer();
		pY = pY - 1;
		printPlayerWithMask();
		score = score + 5;
	}
	else if ((getCharAtxy(pX + 10, pY - 1) == '*') || (getCharAtxy(pX + 10, pY - 1) == '-'))
	{
		erasePlayer();
		pY = pY - 1;
		printPlayerWithMask();
		score = score + 5;
	}
	else if ((getCharAtxy(pX + 11, pY - 1) == '*') || (getCharAtxy(pX + 11, pY - 1) == '-'))
	{
		erasePlayer();
		pY = pY - 1;
		printPlayerWithMask();
		score = score + 5;
	}
}
void getMaskToDown()
{
	if ((getCharAtxy(pX, pY + 5) == '*') || (getCharAtxy(pX, pY + 5) == '-'))
	{
		erasePlayer();
		pY = pY + 1;
		printPlayerWithMask();
	}
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

#pragma once
#include "workingWith.h"
#include <stdio.h>
#include <io.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include "Menu.h"

string Menu::userInput()
{
	string uI;
	cin >> uI;
	return uI;
}

Menu::Menu()
{
	
	char mChoise, exit;
	do
	{
		do
		{
			system("cls");
			cout << "*********** FLeMANAGER ***********" << endl << endl;
			cout << "(o) CREATE FILE" << endl << "(O) CREATE DIRECTORY" << endl << "(r) RENAME FILE" << endl << "(R) RENAME DIRECTORY"
				<< endl << "(d) DELETE FILE" << endl << "(D) DELETE DIRECTORY" << endl << "(c) COPY FILE" << endl << "(C) COPY DIRECTORY" 
				<< endl << "(f) FIND FILE" << endl << "(F) FIND DIRECTORY" << endl << "(0) EXIT" << endl << endl;
			mChoise = _getch();
		} while (mChoise != 'o' && mChoise != 'O' && mChoise != 'r' && mChoise != 'R' && mChoise != 'd' && mChoise != 'D' 
			&& mChoise != 'c' && mChoise != 'C' && mChoise != 'f' && mChoise != 'F' && mChoise != '0' );

		switch (mChoise)
		{// убрать заглушки
		case 'o':
			cout << "enter file name\n";
			f.create(userInput());
			break;
		case 'O':
			cout << "enter directory name\n";
			d.create(userInput());
			break;
		case 'r':
			cout << "enter old filename\n";
			select = userInput();
			cout << "enter new filename\n";
			f.rename_(select, userInput());
			break;
		case 'R':
			cout << "R";
			break;
		case 'd':
			cout << "d";
			break;
		case 'D':
			cout << "D";
			break;
		case 'c':
			cout << "c";
			break;
		case 'C':
			cout << "C";
			break;
		case 'f':
			cout << "f";
			break;
		case 'F':
			cout << "F";
			break;

		case '0':
			cout << "exit";
			break;
		}
		cout << endl << "Do you want go to menu or exit? (1 - yes, 0 - no)" << endl;
		fflush(stdin);
		exit = _getch();
	} while (exit != '0');
	
}

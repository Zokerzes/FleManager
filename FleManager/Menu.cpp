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
	f.myPath;
	d.myPath = f.myPath;
	char mChoise, exit;
	string tUI;
	bool flagStart = 0;
	do
	{
		do
		{
			if (!flagStart) {
				flagStart = true;
				system("cls");
			}
			cout << "************** FLeMAN **************" << endl << endl;
			cout << "(i) DIR" << endl << "(s) GO TO PATH" << endl << "(o) CREATE FILE" << endl << "(O) CREATE DIRECTORY" << endl << "(r) RENAME FILE" << endl << "(R) RENAME DIRECTORY"
				<< endl << "(d) DELETE FILE" << endl << "(D) DELETE DIRECTORY" << endl << "(c) COPY FILE" << endl << "(C) COPY DIRECTORY" 
				<< endl << "(m) SIZE FILE" << endl << "(M) SIZE  DIRECTORY"
				<< endl << "(f) FIND FILE" << endl << "(F) FIND DIRECTORY" << endl << "(0) EXIT" << endl << endl;
			mChoise = _getch();
		} while (mChoise != 'm' && mChoise != 'M' && mChoise != 'i' && mChoise != 's' && mChoise != 'o' && mChoise != 'O' && mChoise != 'r' && mChoise != 'R' && mChoise != 'd' && mChoise != 'D'
			&& mChoise != 'c' && mChoise != 'C' && mChoise != 'f' && mChoise != 'F' && mChoise != '0' );

		switch (mChoise)
		{
		case 'i':
			tUI ="dir "+ f.myPath+"\\";

			system(tUI.c_str());
			break;
		case 's':
			cout << "enter path\n";
			f.myPath = userInput();
			d.myPath = f.myPath;
			tUI= "dir " + f.myPath;
			system(tUI.c_str());
			
			break;
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
			cout << "enter old directory name\n";
			select = userInput();
			cout << "enter new directory name\n";
			d.rename_(select, userInput());
			break;
		case 'd':
			cout << "enter file name to delite\n";
			f.del(userInput());
			break;
		case 'D':
			cout << "enter dir name to delite\n";
			d.del(userInput());
			break;
		case 'c':
			cout << "enter filename\n";
			select = userInput();
			cout << "enter new full path \n";
			f.copy_(select, userInput());
			break;
		case 'C':
			cout << "enter directory name\n";
			select = userInput();
			cout << "enter new full path \n";
			d.copy_(select, userInput());
		case 'f':
			cout << "enter text to find\n";
			f.find(userInput());
			break;
		case 'F':
			cout << "enter text to find\n";
			d.find(userInput());
			break;

		case 'm':
			cout << "enter file name\n";
			f.whatSise(userInput());
			break;
		
		case '0':
			cout << "exit";
			break;
		}
		
		exit = mChoise;
	} while (exit != '0');
	
}

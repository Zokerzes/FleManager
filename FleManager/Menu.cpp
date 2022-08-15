#pragma once
#include "workingWith.h"
#include <stdio.h>
#include <io.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include "Menu.h"

Menu::Menu()
{
	
	char mChoise, exit;
	do
	{
		do
		{
			system("cls");
			cout << "*********** ONE HAND BANDIT ***********" << endl << endl;
			cout << "(1) START GAME" << endl << "(0) EXIT" << endl << endl;
			mChoise = _getch();
		} while (mChoise != '1' && mChoise != '0');

		switch (mChoise)
		{
		case '1':
			game();
			break;

		case '0':

			break;
		}
		cout << endl << "Do you want go to menu or exit? (1 - yes, 0 - no)" << endl;
		fflush(stdin);
		exit = _getch();
	} while (exit != '0');
	
}

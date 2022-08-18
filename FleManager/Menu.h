#pragma once
#include "workingWith.h"
#include <stdio.h>
#include <io.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include <conio.h>
#include "File.h"
#include "Directory.h"
#include "Menu.h"
class Menu
{
public:

	
	string select;

	File f;
	Directory d;
	string userInput();
	
	Menu();


};


//Здесь находятся функции переименования и удаления
#include <stdio.h>
//Здесь находятся функции для поиска файлов
#include <io.h>
#include <string.h>
#include <iostream>
#include "File.h"
#include "Directory.h"
#include "workingWith.h"
using namespace std;


int main()
{
	File f;
	cout<<f.create("tes1.txt");
	cout << f.create("test.txt","some thing");
}


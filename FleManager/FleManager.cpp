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
	Directory d;
	cout<<f.create("tes1.txt")<<endl;
	cout << f.create("test.txt","some thing") << endl;
	cout<< d.create("d1") << endl;
}


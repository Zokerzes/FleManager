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
	cout<<"fil_cr "<< f.create("tes1.txt") << endl;
	cout << "fil_cr " << f.create("test.txt","some thing") << endl;
	cout<< "dir_cr " << d.create("d1") << endl;
	f.setName("tes1.txt");
	cout << "fil_rn " << f.rename_("tes11.txt") << endl;



}


#define _SILENCE_EXPERIMENTAL_FILESYSTEM_DEPRECATION_WARNING
//Здесь находятся функции переименования и удаления
#include <stdio.h>
//Здесь находятся функции для поиска файлов
#include <io.h>
#include <string.h>
#include <iostream>
#include "File.h"
#include "Directory.h"
#include "workingWith.h"
#include "Menu.h"
#include <experimental/filesystem>

using namespace std;
namespace fs = std::experimental::filesystem;

int main()
{
	
	//File f;
	//Directory d;
	//Menu menu;
	// Получаем текущий путь процесса (a.k.a. working directory)
	//const fs::path workdir = fs::current_path();
	//cout << workdir<<endl;
	//fs::create_directories("U:\\FleManager\\FleManager\\112"); //worcked!!
	std::vector<fs::path> paths = {
		"U:\\FleManager\\FleManager\\112\\1.txt",
		"U:\\FleManager\\FleManager\\112\\2.txt",
		"U:\\FleManager\\FleManager\\112\\3.dat",
		"U:\\FleManager\\FleManager\\112\\4.dat"
	};
	for (const auto& filepath : paths)
	{
		// В C++17 конструктор fstream принимает как string, так и wstring,
		//  это упрощает кроссплатформенное конструирование его из path
		std::ofstream(filepath.native()) << "test";
	}

	fs::recursive_directory_iterator begin("data");
	fs::recursive_directory_iterator end;
	// Получаем список подкаталогов с помощью алгоритма copy_if
	std::vector<fs::path> subdirs;
	std::copy_if(begin, end, std::back_inserter(subdirs), [](const fs::path& path) {
		return fs::is_directory(path);
		});
	// Выводим список подкаталогов в cout.
	std::cout << "-- subdirs --" << std::endl;
	std::copy(subdirs.begin(), subdirs.end(), std::ostream_iterator<fs::path>(std::cout, "\n"));






	/*fs::current_path() = "U:\\FleManager\\FleManager\\111";
	fs::path workdir = fs::current_path();
	cout << workdir;*/
	//cout<<"fil_cr "<< f.create("tes1.txt") << endl;
	/*cout << "fil_cr " << f.create("test.txt","some thing") << endl;
	cout<< "dir_cr " << d.create("d1") << endl;
	f.setName("tes1.txt");
	cout << "fil_rn " << f.rename_("tes11.txt") << endl;
	d.setName("d1");
	cout << "dir_cr " << d.rename_("d2") << endl;*/
	//d.del("d2");
	/*cout << "fil_cr " << f.create("U:\\FleManager\\FleManager\\tes2.txt") << endl;
	f.del("tes2.txt");
	cout << "dir_cr " << d.create("U:\\FleManager\\FleManager\\d3") << endl;
	cout << "fil_rn " << f.copy_("U:\\FleManager\\FleManager\\tes2.txt","U:\\FleManager\\FleManager\\d3\\tes11.txt") << endl;*/

}


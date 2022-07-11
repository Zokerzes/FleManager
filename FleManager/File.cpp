#include "File.h"
#include <fstream>

File::File()
{
	this->name = "none\\";
	this->path = "none";
	this->fullPath = path + name;
}

//virtual int File::create(string name)
//{
//	std::ofstream file{ name.c_str() };
//	if (file.is_open()) return 0;
//	else { return -1; };
//	
//}

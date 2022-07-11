#include "Directory.h"
Directory::Directory()
{
	this->name = "none\\";
	this->path = "none";
	this->fullPath = path + name;
}
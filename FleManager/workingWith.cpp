#include "workingWith.h"

workingWith::workingWith(string name,string path)
{
	this->path = path;
	this->name = name;
	this->fullPath=path+name;
}

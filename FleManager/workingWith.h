#pragma once
#include <string.h>
#include <iostream>
using namespace std;
class workingWith
{
public:
	string fullPath;
	string path;
	string name;

	workingWith();


	virtual int create() = 0;
	virtual int rename() = 0;
	virtual int del() = 0;
	virtual int copy() = 0;
	virtual int relocate() = 0;
	virtual int whatSise() = 0;
	virtual int find() = 0;

};


#pragma once
#include <string.h>
#include <iostream>
using namespace std;
class workingWith
{
protected:

	string fullPath;
	string path;
	string name;
public:
	string myPath = "d:\\itSteps\\Fle";
	string selectObj = "d:\\itSteps\\Fle";
	workingWith() {};
	workingWith(string,string);

	void setName(string name) { this->name = name; };
	void setPach(string path) { this->path = path; };

	string getName()		{ return name; };
	string getPath()		{ return path; };
	string getFullPath()	{ return fullPath; };

	virtual int create(string) = 0;
	virtual int rename_(string,string) = 0;
	virtual int del(string) = 0;
	virtual int copy_(string,string) = 0;
	virtual int whatSise(string) = 0;
	virtual int find(string) = 0;

};


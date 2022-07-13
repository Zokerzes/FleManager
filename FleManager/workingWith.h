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
	string myPath = "U:\\FleManager\\FleManager\\";
	string selectObj = "U:\\FleManager\\FleManager\\";
	workingWith() {};
	workingWith(string,string);

	void setName(string name) { this->name = name; };
	void setPach(string path) { this->path = path; };

	string getName()		{ return name; };
	string getPath()		{ return path; };
	string getFullPath()	{ return fullPath; };

	virtual int create(string) = 0;
	//virtual int create(string name, string text) = 0;
	virtual int rename_(string) = 0;
	/*virtual int del() = 0;
	virtual int copy() = 0;
	virtual int relocate() = 0;
	virtual int whatSise() = 0;
	virtual int find() = 0;*/

};


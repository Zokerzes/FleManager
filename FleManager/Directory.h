#pragma once
#include "workingWith.h"
#include <stdio.h>
#include <io.h>
#include <string.h>
#include <iostream>
#include <direct.h>
using namespace std;
class Directory :
    public workingWith
{
public:
   
    Directory();

    virtual int create(string name) 
    {

        return _mkdir((myPath+name).c_str());
       
    }
    virtual int rename_(string name) {
        fullPath = myPath + this->name + "\\";
        string newPath = myPath + name + "\\";
        if (!(rename(fullPath.c_str(), newPath.c_str())))
        {
            return 0;
        }
        return -1;
    };
    virtual int del(string name) {
        fullPath = selectObj + name /*+ "\\"*/;
        if (!remove(fullPath.c_str())) {
            cout << "file " << name << " is deleted" << endl;
            return 0;
        }
        return -1;


    };
};


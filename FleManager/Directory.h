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
        string tUI = "mkdir " + myPath + "\\"+ name;
        system(tUI.c_str());
        return 0;
        //_mkdir((myPath + "\\" + name).c_str());

    }
    virtual int rename_(string oldname, string name)
    {

        string tUI = "ren " + myPath + "\\" + oldname + " " + name;
        system(tUI.c_str());
        /*fullPath = myPath + oldname + "\\";
        string newPath = myPath + name + "\\";
        if (!(rename(fullPath.c_str(), newPath.c_str())))
        {
            return 0;
        }*/
        return 0;
    };
    virtual int del(string name)
    {

        string tUI = "rd " + myPath + "\\" + name;
        system(tUI.c_str());
        /*fullPath = myPath + name;
        if (!_rmdir(fullPath.c_str())) {
            cout << "directory " << name << " is deleted" << endl;
            return 0;
        }*/
        return 0;
    };
    virtual int copy_(string oldPath, string newPath)
    {
        /*fullPath = myPath + oldPath;
        string newPath = myPath + newPath;*/
        if (!(rename(oldPath.c_str(), newPath.c_str())))
        {
            return 0;
        }
        return -1;
    };
};
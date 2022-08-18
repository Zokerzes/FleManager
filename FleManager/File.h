#pragma once
#include "workingWith.h"
#include <stdio.h>
#include <io.h>
#include <string.h>
#include <iostream>
#include <fstream>
using namespace std;
class File :
    public workingWith
{
public:
    
    File();

    virtual int create(string name)
    {
       
       /* string tUI = "NUL > " + myPath + "\\"+ name;
        system(tUI.c_str());*/
        
        name =myPath + "\\" + name;
        std::ofstream file{ name.c_str() };
        if (file.is_open()) return 0;
        else { return -1; };
        return 0;
    }
    int create(string name,string text)
    {
        std::ofstream file{ name.c_str() };
        file << text << endl;
        if (file.is_open()) return 0;
        else { return -1; };
    }
    virtual int rename_(string oldname, string name) {
        string tUI = "ren " + myPath + "\\" + oldname+" "+name;
        system(tUI.c_str());
        
        
        /*fullPath = myPath + oldname;
        string newPath = myPath + name;
        if (!(rename(fullPath.c_str(), newPath.c_str()))) 
        {
            return 0;
        }
        return -1;*/
        return 0;
    };
    virtual int del(string name) {

        string tUI = "del " + myPath + "\\" + name;
        system(tUI.c_str());

       /* fullPath = myPath + name;
        if (!remove(fullPath.c_str())) {
            cout << "file " << name << " is deleted" << endl;
            return 0;
        }*/
        return 0;
    };
    virtual int copy_(string oldPath, string newPath ) {
        /*fullPath = myPath + oldPath;
        string newPath = myPath + newPath;*/
        if (!(rename(oldPath.c_str(), newPath.c_str())))
        {
            return 0;
        }
        return -1;
    };
};


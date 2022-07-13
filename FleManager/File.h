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
        std::ofstream file{ name.c_str() };
        if (file.is_open()) return 0;
        else { return -1; };

    }
    /*virtual*/ int create(string name,string text)
    {
        std::ofstream file{ name.c_str() };
        file << text << endl;
        if (file.is_open()) return 0;
        else { return -1; };
    }
    virtual int rename_(string name) {
        fullPath = myPath + this->name;
        string newPath = myPath + name;
        if (!(rename(fullPath.c_str(), newPath.c_str()))) 
        {
            return 0;
        }
        return -1;
    };
    virtual int del(string name) {
        fullPath = selectObj + name;
        if (!remove(fullPath.c_str())) {
            cout << "file " << name << " is deleted" << endl;
            return 0;
        }
        return -1;

        
    };
};


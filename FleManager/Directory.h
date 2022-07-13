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


        return 0;
    };
};


#pragma once
#include "workingWith.h"
#include <stdio.h>
#include <io.h>
#include <string.h>
#include <iostream>
#include<fstream>
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

};


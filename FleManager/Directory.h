#define _SILENCE_EXPERIMENTAL_FILESYSTEM_DEPRECATION_WARNING
#pragma once
#include "workingWith.h"
#include <stdio.h>
#include <io.h>
#include <string.h>
#include <iostream>
#include <direct.h>
#include <experimental/filesystem>
namespace fs = std::experimental::filesystem;
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
       

    }
    virtual int rename_(string oldname, string name)
    {

        string tUI = "ren " + myPath + "\\" + oldname + " " + name;
        system(tUI.c_str());
       
        return 0;
    };
    virtual int del(string name)
    {

        string tUI = "rd " + myPath + "\\" + name;
        system(tUI.c_str());
       
        return 0;
    };
    virtual int copy_(string oldname, string name) {

        string tUI = "xcopy " + myPath + "\\" + oldname + " " + name + " /e";
        system(tUI.c_str());



        return 0;
    };
    virtual int find(string name) {
        string tUI = "dir /s  " + myPath + "\\" + name;
        system(tUI.c_str());
        return 0;
    };
    virtual int whatSise(string) {
    
    
        return 0;
    };
};
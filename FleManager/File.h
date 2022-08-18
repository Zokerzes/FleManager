#define _SILENCE_EXPERIMENTAL_FILESYSTEM_DEPRECATION_WARNING
#pragma once
#include "workingWith.h"
#include <stdio.h>
#include <io.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include <experimental/filesystem>
namespace fs = std::experimental::filesystem;
using namespace std;
class File :
    public workingWith
{
public:
    
    File();

    virtual int create(string name)
    {
          
        name =myPath + "\\" + name;
        std::ofstream file{ name.c_str() };
        if (file.is_open()) return 0;
        else { return -1; };
        return 0;
    }
  
    virtual int rename_(string oldname, string name) {
        string tUI = "ren " + myPath + "\\" + oldname+" "+name;
        system(tUI.c_str());
      
        return 0;
    };
    virtual int del(string name) {

        string tUI = "del " + myPath + "\\" + name;
        system(tUI.c_str());

        return 0;
    };
    virtual int copy_(string oldname, string name) {
       
        string tUI = "copy " + myPath + "\\" + oldname + " " + name;
        system(tUI.c_str());
        
     
        return 0;
    };
    virtual int find(string name) {
        string tUI = "dir /s  " + myPath + "\\" + name;
        system(tUI.c_str());
        return 0;
    };
    virtual int whatSise(string name) {
       

        string a, b, c; //костыль к file_size: в одну строку не работает
        a = myPath;
        b = "\\";
        c = a + b + name;
        cout << fs::file_size(c) << " Bite\n\n";
       
    
        return 0;
    };

};


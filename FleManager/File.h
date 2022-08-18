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
       
       /* string tUI = "NUL > " + myPath + "\\"+ name;
        system(tUI.c_str());*/
        
        name =myPath + "\\" + name;
        std::ofstream file{ name.c_str() };
        if (file.is_open()) return 0;
        else { return -1; };
        return 0;
    }
    //not use
    /*int create(string name,string text)
    {
        std::ofstream file{ name.c_str() };
        file << text << endl;
        if (file.is_open()) return 0;
        else { return -1; };
    }*/
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
    virtual int copy_(string oldname, string name) {
       
        string tUI = "copy " + myPath + "\\" + oldname + " " + name;
        system(tUI.c_str());
        
        
        
        /*fullPath = myPath + oldPath;
        string newPath = myPath + newPath;
        if (!(rename(oldPath.c_str(), newPath.c_str())))
        {
            return 0;
        }*/
        return 0;
    };
    virtual int find(string name) {
        string tUI = "dir /s  " + myPath + "\\" + name;
        system(tUI.c_str());
        return 0;
    };
    virtual int whatSise(string name) {
        //string tUI = myPath + "\\" + name;

        string a, b, c; //������� � file_size: � ���� ������ �� ��������
        a = myPath;
        b = "\\";
        c = a + b + name;
        cout << fs::file_size(c) << " Bite\n\n";
        //cout << fs::file_size(tUI)<<" Bite";
    
        return 0;
    };

};


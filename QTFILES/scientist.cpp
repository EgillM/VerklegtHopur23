#include "scientist.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

scientist::scientist()
{
    name = "John Doe";
    sex = 0;
    doB = time();
    
}

scientist::scientist()
{

}

scientist::scientist(string name, bool sex, time_t doB, time_t doD)
{

}

string scientist::returnName()
{
    return name;
}

bool scientist::returnSex()
{
    if(sex == 0)
        return false;
    else
        return true;
}


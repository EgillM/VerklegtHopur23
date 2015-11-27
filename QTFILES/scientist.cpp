#include "scientist.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

scientist::scientist()
{
    name = "John Doe";
    sex = 0;
    doB = "12:12:2012";
    doD = "13:01:2012";
    
}

scientist::scientist()
{

}

scientist::scientist(string name, bool sex, string doB, string doD)
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


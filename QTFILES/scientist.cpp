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

bool scientist::returnSex()
{
    if(sex == 0)
        return false;
    else
        return true;
}


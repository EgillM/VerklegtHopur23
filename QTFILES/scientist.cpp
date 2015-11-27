#include "scientist.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

scientist::scientist()
{
    name = "John Doe";
    sex = 1;
    doB = "12:12:2012";
    doD = "13:01:2012";
    
}



scientist::scientist(string name, bool sex, string doB, string doD)

{
    name = Sname;
    sex = Ssex;
    doB = SdoB;
    doD = SdoD;

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


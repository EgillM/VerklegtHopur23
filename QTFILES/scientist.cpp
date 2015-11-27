#include "scientist.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

scientist::scientist()
{
    name = "John Doe";
    sex = 1;
    doB = QDate(2012,01,01);
    doD = QDate(2013,01,01);
    
}



scientist::scientist(string Sname, bool Ssex, QDate SdoB, QDate SdoD)

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

QDate scientist::dateofBirth()
{
    return doB;
}

QDate scientist::dateofDeath()
{
    return doD;
}


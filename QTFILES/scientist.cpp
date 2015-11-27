#include "scientist.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

scientist::scientist()
{
    name = "John Doe";
    sex = "male";
    doB = QDate(2012,01,01);
    doD = QDate(2013,01,01);
    
}



scientist::scientist(string Sname, string Ssex, QDate SdoB, QDate SdoD)

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

string scientist::returnSex()
{
    return sex;
}

QDate scientist::dateofBirth()
{
    return doB;
}

QDate scientist::dateofDeath()
{
    return doD;
}


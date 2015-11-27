#include "scientist.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class scientist
{
private:
    string name;
    bool sex;
    time_t doB;
    time_t doD;
public:
    string returnName();
    bool returnSex();
    time_t dateofBirth();
    time_t dataofDeath();
};

#ifndef SCIENTIST_H
#define SCIENTIST_H
#include <ctime>
#include <string>

class scientist
{
private:
    string name;
    bool sex;
    time_t doB;
    time_t doD;
public:
    scientist();
    scientist(string name, bool sex, time_t doB, time_t doD);
    string returnName();
    bool returnSex();
    time_t dateofBirth();
    time_t dataofDeath();
};

#endif // SCIENTIST_H

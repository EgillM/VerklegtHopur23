#ifndef SCIENTIST_H
#define SCIENTIST_H
#include <ctime>
#include <string>

using namespace std;

class scientist
{
private:
    string name;
    bool sex;
    string doB;
    string doD;
public:
    scientist();
    scientist(string name, bool sex, string doB, string doD);
    string returnName();
    bool returnSex();
    string dateofBirth();
    string dateofDeath();
};

#endif // SCIENTIST_H

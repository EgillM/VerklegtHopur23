#ifndef SCIENTIST_H
#define SCIENTIST_H
#include <QDateTime>
#include <string>

using namespace std;

class scientist
{
private:
    string name;
    bool sex;
    QDate doB;
    QDate doD;
public:
    scientist();
    scientist(string name, bool sex, QDate doB, QDate doD);
    string returnName();
    bool returnSex();
    QDate dateofBirth();
    QDate dateofDeath();
};

#endif // SCIENTIST_H

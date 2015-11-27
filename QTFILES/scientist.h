#ifndef SCIENTIST_H
#define SCIENTIST_H
#include <QDateTime>
#include <string>

using namespace std;

class scientist
{
private:
    string name;
    string sex;
    QDate doB;
    QDate doD;
public:
    scientist();
    scientist(string name, string sex, QDate doB, QDate doD);
    string returnName();
    string returnSex();
    QDate dateofBirth();
    QDate dateofDeath();
};

#endif // SCIENTIST_H

#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <vector>
#include "scientist.h"

class controller
{
public:
    void getDB();
    void functionHandler(int n);
    void addScientist();
    void writeToDB(scientist guy);
};

#endif // CONTROLLER_H

#include "model.h"
#include "scientist.h"
#include <fstream>
#include <iostream>
#include <string>
#include <QString>
#include <QStringList>
#include <QTextStream>
#include <vector>

using namespace std;

void model::retDB(){
    string check;
    QTextStream db("database.txt");
    QString line = "";
    QStringList currList;
    while(true){
        line = db.readLine();
        if(line.isNull()){
            break;
        }
        else{
            currList = line.split('\t');
            line = currList[2];
            cout << line.toStdString();
        }
    }
}


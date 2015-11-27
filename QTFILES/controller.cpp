#include "model.h"
#include "controller.h"
#include <iostream>
#include <vector>
#include <string>
#include <QDateTime>
#include <QString>
#include <Qfile>
#include <QTextStream>
#include <fstream>

using namespace std;

void controller::getDB(){
    model DB;
    DB.retDB();
}

void controller::addScientist(){
    string name = "";
    string sex = "";
    int bDay = 0;
    int bMonth = 0;
    int bYear = 0;
    int dDay = 0;
    int dMonth = 0;
    int dYear = 0;
    QDate doB;
    QDate doD;

    cout << "Write a name for the scientist: ";
    cin >> name;
    cout << "Write 'female' for female and 'male' for male: ";
    cin >> sex;
    cout << "Write the Day of the date of birth for your scientist: ";
    cin >> bDay;
    cout << "Write the Month of the date of birth for your scientist: ";
    cin >> bMonth;
    cout << "Write the Year of the date of birth for your scientist: ";
    cin >> bYear;
    cout << "Write the Day of the date of death for your scientist (0 if he's alive): ";
    cin >> dDay;
    if(dDay != 0){
        cout << "Write the Month of the date of death for your scientist (0 if he's alive): ";
        cin >> dMonth;
        cout << "Write the Year of the date of death for your scientist (0 if he's alive): ";
        cin >> dYear;
    }
    else{
        dDay = 1, dMonth = 1, dYear = 1;
    }

    doB = QDate(bYear, bMonth, bDay);
    doD = QDate(dYear, dMonth, dDay);
    scientist newScientist = scientist(name, sex, doB, doD);

    writeToDB(newScientist);

}

void controller::writeToDB(scientist guy){
    QFile file("database.txt");
    string str = "\"" + guy.returnName() + "\"\t\"" + guy.returnSex() + "\"\t\"" + guy.dateofBirth().toString().toStdString() + "\"\t\"" + guy.dateofDeath().toString().toStdString() + "\"";
    //char* arr = str;
    if(file.open(QIODevice::ReadWrite)){
        QTextStream stream(&file);
        stream << "\"";
    }
}

void controller::functionHandler(int n){
    switch(n){
        case 1:
            getDB();
        case 2:
            addScientist();
    }
}


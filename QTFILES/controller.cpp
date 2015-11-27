#include "model.h"
#include "controller.h"
#include <iostream>
#include <vector>
#include <string>
#include <QDateTime>
#include <QString>
#include <fstream>

using namespace std;

void controller::getDB(){
    model DB;
    DB.retDB();
}

void controller::addScientist(){
    string name = "";
    bool sex = 0;
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
    cout << "Write 0 for female and 1 for male: ";
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
        dDay, dMonth, dYear = 1;
    }

    doB = QDate(bYear, bMonth, bDay);
    doD = QDate(dYear, dMonth, dDay);

    cout << doD.toString().toStdString() << endl;
    scientist newScientist = scientist(name, sex, doB, doD);

    writeToDB(newScientist);

}

void controller::writeToDB(scientist guy){
    ofstream appendGuy;
    string stuff = "";
    appendGuy.open("database.txt", ios::app);

    stuff = guy.returnName() + "\t" + guy.returnSex() + "\t" + guy.dateofBirth().toString().toStdString() + "\t" + guy.dateofDeath().toString().toStdString();

    cout << stuff;
}

void controller::functionHandler(int n){
    switch(n){
        case 1:
            getDB();
        case 2:
            addScientist();
    }
}


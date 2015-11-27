#include <QCoreApplication>
#include "scientist.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void addToList(vector<scientist>& db){
    string name = "";
    bool sex = 0;
    string doB = "";
    string doD = "";

    cout << "Write a name for the scientist: ";
    cin >> name;
    cout << "Write 0 for female and 1 for male: ";
    cin >> sex;
    cout << "Write the date of birth for your scientist: ";
    cin >> doB;
    cout << "Write the date of death for your scientist: ";
    cin >> doD;

    scientist newScientist = scientist(name, sex, doB, doD);

    db.push_back(newScientist);
}

void listTheList(vector<scientist>& db){



}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    vector<scientist> db;

    int select = 25;
      cout << "This is commandline interface for a CS scienctist program" << endl;
    while (select != 0){
        cout << "1. List all scientists" << endl
             << "2. Add new scientist" << endl
             << "3. Remove scientist" << endl
             << "4. Search by name" << endl
             << "0. Quit the application" << endl;
        cin >> select;
        switch(select){
            case 1:
                //listItUp(db);
                break;
            case 2:
                addToList(db);
                break;
            default:
                continue;
        }
    }
    return 0;
    //return a.exec();

    //return a.exec();
}

#include <QCoreApplication>
#include "scientist.h"
#include "view.h"
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

    cout << db[0].returnName() << endl;
    cout << db[0].returnSex() << endl;
    cout << db[0].dateofBirth() << endl;
    cout << db[0].dateofDeath() << endl;

}

int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);
    view newView;
    newView.displayInterface();

    return 0;
}

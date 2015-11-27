//#include <QCoreApplication>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int currentLength(vector<string>& db){
    ifstream dataBase("database.txt");
    int i = 1;
    while(getline(dataBase, i) != ""){
      i++;
    }
    return i*4;
}
void addToList(vector<string>& db){
    string name = "";
    string sex = "";
    string dateOfBirth = "";
    string dateOfDeath = "";
    cout << "Write the name of the scientist: ";
    cin >> name;
    db.push_back(name);
    cout << "Write 'male' if they are male and 'female' if they are female: ";
    cin >> sex;
    db.push_back(sex);
    cout << "Wrtie the date of birth (DD/MM/YYYY): ";
    cin >> dateOfBirth;
    db.push_back(dateOfBirth);
    cout << "Write the date of death (DD/MM/YYYY) or ALIVE: ";
    cin >> dateOfDeath;
    db.push_back(dateOfDeath);
    CURR_PLACE += 4;

}
void saveList(vector<string> db){
    ifstream text ("database.txt");
    vector<string> tempDB;

}

void listItUp(vector<string>& db){
    for (int i = 0; i <= CURR_PLACE; i++) {
          cout << db[i];
    }
}

int main(int argc, char *argv[])
{
	//QCoreApplication a(argc, argv);
    vector<string> db(120);
    int select = 25;
	  cout << "This is commandline interface for a CS scienctist program" << endl;
    while (select != 0){
    cout << "1. List all scientists" << endl << "2. Add new scientist" << endl << "3. Remove scientist" << endl << "4. Search by name" << endl << "0. Quit the application" << endl;
        cin >> select;
        switch(select){
            case 1:
                listItUp(db);
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
}

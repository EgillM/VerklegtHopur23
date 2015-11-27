#include "model.h"
#include "scientist.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

void retDB(){
    ifstream db;
    db.open("database.txt");
    string line = "";
    while(!db.eof()){
        cout << line;
    }
}


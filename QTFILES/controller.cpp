#include "model.h"
#include "controller.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void controller::getDB(){
    model DB;
    DB.retDB();
}

void controller::functionHandler(int n){
    switch(n){
        case 1:
            getDB();
    }
}


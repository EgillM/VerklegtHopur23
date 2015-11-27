#include <iostream>
#include "view.h"
#include <string>

using namespace std;

view::view()
{
    // This should never happen
}

void view::displayInterface()
{
    int select = 25;
      cout << "This is commandline interface for a CS scientist program" << endl;
    while (select != 0){
        cout << "1. List all scientists" << endl
             << "2. Add new scientist" << endl
             << "3. Remove scientist" << endl
             << "4. Search by name" << endl
             << "0. Quit the application" << endl;
        cin >> select;
        switch(select){
            case 1:
                //functionHandler(select);
                break;
            case 2:
                //functionHandler(select);
                break;
            case 3:
                //functionHandler(select);
                break;
            case 4:
                //functionHandler(select);
            default:
                continue;
        }
    }
}


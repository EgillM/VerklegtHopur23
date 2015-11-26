#include <QCoreApplication>
#include <iostream>
#include <string>

using namespace std;


int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);
	
	int select = 1;

	cout << "This is commandline interface for a CS scienctist program" << endl;
	cout << "1. List all scientists" << endl << "2. Add new scientist" << endl << "3. Remove scienctist" << endl << "4. Search by name" << endl << "0. Quit the application" << endl;
	while (select != 0);
		cin >> select;
		if(select == 1){
			
		}
	
	return a.exec();
}
void list(){

}


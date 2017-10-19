#include <iostream>
#include <string>
#include <fstream>
#include "Controller.h";
;
using namespace std;

Controller::Controller(){};
Controller::~Controller(){};

Bank& Controller::getInstance()
{
	static Bank bank;
	return bank;
};

void Controller::loadingDateFromFile()
{
	ifstream stream;
	stream.open("data_base.txt");
	if(stream.is_open())
		while(true)
		{
			string bankName; 
			getline(stream, bankName);  //name of bank
			if(bankName.empty()) break;

			string accountNumb;
			getline(stream, accountNumb); // number of account
			string person;
			getline(stream, person); //owner
			Account aTemp(trim(accountNumb),trim(bankName));
			string empty;
			while(true)     // read cards date
			{
				string cardNumb;  
				getline(stream, cardNumb); //numb of card

				if(cardNumb.empty()){
					break;
				}
				string date;
				getline(stream, date); //data
				string pass;              
				getline(stream, pass); //password
				/*cout<<bankName.c_str()<<endl;
				cout<<accountNumb.c_str()<<endl;
				cout<<person.c_str()<<endl;
				cout<<cardNumb.c_str()<<endl;
				cout<<date.c_str()<<endl;
				cout<<pass.c_str()<<endl;
				*/
				Card cTemp(trim(cardNumb),trim(accountNumb),trim(date),trim(bankName),trim(pass),trim(person));
				aTemp.addCard(cTemp);
				//cout<<endl;
			}
			//	cout<<endl;
			getInstance().openAccount(aTemp);
		}

		stream.close();
};

string Controller::trim(string& str) // wrong
{
	size_t first = str.find_first_not_of(' ');
	size_t last = str.find_last_not_of(' ');
	return str.substr(first, (last-first+1));
}





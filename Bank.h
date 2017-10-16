#include <iostream>
#include <map>
#include "Account.h";
using namespace std;

class Bank
{
private:
	string _mfo; // можливо іnt або ж штучний тип
	string _nBank; 
	map<string, Account> _cells;  //collection of bills
	Bank(const Bank&);
	Bank& operator=(const Bank&);
public:
	Bank();
	~Bank();
	void openAccount(const Account&); // add new Account in _cellls

};
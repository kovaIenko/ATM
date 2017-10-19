#include <iostream>
#include <map>
#include <string>
#include "Account.h";
using namespace std;

class Bank
{
private:
	string _mfo; // можливо іnt або ж штучний тип
	string _nBank; 
	map<string, Account> cells;  //collection of bills
	Bank(const Bank&);
	Bank& operator=(const Bank&);
    void insert(Account&); // add new Account in _cellls
public:
	Bank();
	~Bank();
	 void openAccount(Account&);
	 bool contains(const Account&);
};
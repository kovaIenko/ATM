#include <iostream>
#include <map>
#include "Card.h";
;
using namespace std;

class Account
{
private:
	string _account; 
	string _bank;
	map<string, Card> cards;     //collection of Cards

	Account& operator=(const Account&);
	Account(const Account&);
public:
	Account(string account, string bank);
	~Account();

	void addCard(const Card&); // add new Card to Account
	//bool contains(const Card&) const;
};

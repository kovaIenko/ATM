#include <iostream>
#include <map>
#include <string>
#include "Card.h";
;
using namespace std;

class Account
{
private:
	string _account; 
	string _bank;
	map<string,Card> cards;     //collection of Cards

	
	void insert(Card&);
public:
	Account(string& account, string& bank);
	~Account();
	Account& operator=(const Account&);
	Account(const Account&);
	string getAccount() const {return _account; };
	string getBank() const { return _bank; };
	void addCard(Card&); // add new Card to Account
	bool contains(const Card&);
};

#include <iostream>
#include "Date.h";
using namespace std;

class Card
{
private:
	string _card_numb;
	//string _cvv;
	 string _bank;
	string _account_numb;
	 Date _expires;        //expires end
	 string _password;
	 string _owner;
	Card(const Card&);
	Card& operator=(const Card&);

public:
     Card(string card, string account, string date, string bank, string password,string owner);
	~Card();
	bool operator==(const Card&) const;

	string getCardNumb() const { return _card_numb; }
	string getBank() const { return _bank; }
	string getAccountNumb() const { return _card_numb;}
	Date getExpiry() const { return _expires; }
}
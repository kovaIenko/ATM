#include <iostream>
#include <string>
#include "Card.h";
;
using namespace std;

Card::Card(string& card, string& account, string& date, string& bank,string& password, string& owner):
_card_numb(card), _account_numb(account), _expires(date), _bank(bank), _password(password), _owner(owner)
{
}

Card::Card(const Card& c):
_card_numb(c._card_numb), _account_numb(c._account_numb),
	_expires(c._expires), _bank(c._bank), _password(c._password), _owner(c._owner)
{
}

Card::~Card()
{
}
bool Card::operator==(const Card& c) const
{
	if(c.getCardNumb().c_str() ==_card_numb.c_str())
		return false;
	if(c.getAccountNumb() !=_account_numb.c_str())
		return false;
//	if(c.getExpiry() != _expires)
	//	return false;
	if(c.getBank() != _bank.c_str())
		return false; 
	   return true;
}
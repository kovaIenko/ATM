#include <iostream>
#include "Card.h";
;
using namespace std;

Card::Card(string card, string account, string date, string bank,string password, string owner):
_card_numb(card), _account_numb(account), _expires(date), _bank(bank), _password(password), _owner(owner)
{
return;
}


Card::~Card()
{
	return;
}

/*bool Card::operator==(const Card& c) const
{
	if(c.getCardNumb().c_str() ==_card_numb)
		return false;
	if(c.getAccountNumb() !=_account_numb)
		return false;
	if(c.getExpiry() != _expires)
		return false;
	if(c.getBank() != _bank)
		return false; 
	   return true;
}*/
#include <iostream>
#include "Account.h"
using namespace std;

Account::Account(string account, string bank):
_account(account), _bank(bank)
{
}

Account::~Account()
{
}

/*bool Account::contains(const Card& card) const
{
	return cards.containsKey(card.getCardNumb());
}
*/
/*void Account::addCard(const Card& card)
{
	if((*this).contains(card))             // I don't know what I must do in this situation
	{
	}
	cards.add(card.getCardNumb(), card);
}
*/
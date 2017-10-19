#include <iostream>
#include "Account.h"
#include <string>
using namespace std;

    Account::Account(string& account, string& bank):
_account(account), _bank(bank)
{
}

Account::~Account()
{
}

Account::Account(const Account& acc):
_account(acc.getAccount()), _bank(acc.getBank())
{
}

bool Account::contains(const Card& card)
{
	if ( cards.find(card.getAccountNumb()) == cards.end() ) {
           return false;
      } else {
            return true;
             }
};

void Account::insert(Card& card)
{
	cout<<"Card: "<<card.getAccountNumb().c_str()<<endl;
	cards.insert(pair<string,Card>(card.getAccountNumb(),card));
}

void Account::addCard(Card& card)
{
	if(contains(card))             // I don't know what I must do in this situation
	{
	}
	else	
	insert(card);
}

#include <iostream>
#include "Bank.h";
#include <string>
using namespace std;

Bank::~Bank(){
};

Bank::Bank():
_mfo("453892"), _nBank("KMABank")
{
};

void Bank::insert(Account& acc)
{  
	cout<<"Account: "<<acc.getAccount()<<endl;
	cells.insert(pair<string,Account>(acc.getAccount(),acc));
}

void Bank::openAccount(Account& acc)
{   
	if(contains(acc))
	{
	}
	else
     	insert(acc);
}

 bool Bank::contains(const Account& acc)
 {
	 if(cells.find(acc.getAccount())==cells.end())
	 return  false;
	 else return true;
 };

 
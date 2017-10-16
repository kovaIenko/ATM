#include <iostream>
#include "ATM.h";
using namespace std;

Bank& ATM::getInstance()
{
	static Bank bank;
	return bank;
};
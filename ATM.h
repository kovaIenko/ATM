#include <iostream>
#include "Bank.h";
using namespace std;

class ATM
{
private:

public:
	ATM();
	static Bank& getInstance();
};

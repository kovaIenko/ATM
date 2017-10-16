#include <iostream>;
#include "hashmap.h";
//#include "Account.h";
using namespace std;

class Bank
{
private:
	   string _mfo; // можливо іnt або ж штучний тип
	  string _nBank; 
	  HashMap<string,Account> _cells;  //collection of bills
	Bank(const Bank&) = delete;
	Bank& operator=(const Bank&) = delete;
      public:
		  explicit Bank();
		  explicit Bank(string mfo, string name);
		  ~Bank();
		  void openAccount(const Account&); // add new Account in _cellls

}
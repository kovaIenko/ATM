#include <iostream>
#include "Bank.h";
#include <string>
using namespace std;


class Controller
{
private:
	Controller(const Controller&);
	Controller& operator=(const Controller&);
public:
	Controller();
	~Controller();
	Bank& getInstance();
	void loadingDateFromFile();
//
	string trim(string& str);
};



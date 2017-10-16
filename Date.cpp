#include <iostream>
#include <sstream>
#include <ctime>
#include <vector>
#include "Date.h";
using namespace std;



//for gitHub

Date::Date() {
	time_t t = time(0);
	struct tm * now = localtime(&t);
	_day =  (now->tm_mday);
	_month = (now->tm_mon+1);
	_year = (now->tm_year+1900);
	return;
}

Date::Date(const string& s):_day(1){
	 istringstream f(s);
    string monthStr;
	string yearStr;
    getline(f, monthStr, '/');
	getline(f, yearStr, '/');
	int month = atoi(monthStr.c_str());
	int year = atoi(yearStr.c_str());
	setMonth(month);
	setYear(year + 2000); 
	


     
}

Date:: Date(int y, int m, int d ):
	_year(y), _month(m), _day(d) 
{
	return;
}

Date::Date(const Date& d):
	_year(d.year()), _month(d.month()), _day(d.day())
{
	return;
}

Date& Date::operator=(const Date& d)
	{
	_year=d.year();
	_month=d.month();
	_day=d.day();
	return *this;

	}

ostream& operator<<(ostream& os, const Date& d){

	os << d.day() << ',' << d.month() << ',' << d.year();

	return os;
}
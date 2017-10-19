#include <iostream>
#include <sstream>
#include <ctime>
#include <vector>
using namespace std;
#include "Date.h"


//for gitHub

void Date::normalizeDate()
	{
	if(_month > 12){
		throw "Month is incorrect";
	}
	if((_day == 29 && _month == 2 && !isIntercalary(_year) ) || ((_day == 31) && (_month==2 || _month==4 || _month==6 || _month == 8 || _month == 10))){
		throw "Day is incorrect";
	}
	}
bool Date::isIntercalary(int y){
    if (y%4 != 0 || y%100 == 0 && y%400 != 0) return false;
    else return true;
}

Date::Date() {
	normalizeDate();
	time_t t = time(0);
	struct tm * now = localtime(&t);
	_day =  (now->tm_mday);
	_month = (now->tm_mon+1);
	_year = (now->tm_year+1900);
	return;
}

Date::Date(const string& s):_day(1){
	normalizeDate();
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

Date:: Date(int d, int m, int y):
	_year(y), _month(m), _day(d) 
{
	normalizeDate();
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

bool Date::operator==(const Date& d) const {
	return (_year == d.year())&&(_month == d.month())&&(_day==d.day());
}

bool Date::operator!=(const Date& d) const {
	return (_year != d.year())||(_month != d.month())||(_day!=d.day());
}

ostream& operator<<(ostream& os, const Date& d){

	os << d.day() << ',' << d.month() << ',' << d.year();

	return os;
}
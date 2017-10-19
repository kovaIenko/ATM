#include <iostream>
#include <cstring>
using namespace std;
 //forgit
class Date 
{
private:
	int _year;
	int _month;
	int _day;
	void normalizeDate();
	bool isIntercalary(int);
public:
	Date();
	Date(const string&);
	Date(int, int, int);
	Date(const Date&);
	~Date(){};
	Date& operator=(const Date&);

	bool operator==(const Date&) const;
	bool operator!=(const Date&) const;

	int year() const {return _year;}
	int month() const {return _month;}
	int day() const {return _day;}

	int& year() {return _year;}
	int& month() {return _month;}
	int& day() {return _day;}

	void setYear(const  int& y) {_year = y;}
	void setMonth(const  int& m) {_month = m;}
	void setDay(const  int& d) {_day = d;}
};

	ostream& operator<<(ostream&, const Date&);
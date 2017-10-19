#include <iostream>
using namespace std;

class Time 
{
private:
	int _hours;
	int _minutes;
	int _seconds;
	void normalizeTime();
public:
	Time();
	Time(int, int, int);
	Time(const Time&);
	~Time(){};
	Time& operator=(const Time&);
	//forGitHub
	int hours() const {return _hours;}
	int minutes() const {return _minutes;}
	int seconds() const {return _seconds;}

	int& hours() {return _hours;}
	int& minutes() {return _minutes;}
	int& seconds() {return _seconds;}
	
	void setHours(const  int& h) {_hours = h;}
	void setMinutes(const  int& m) {_minutes = m;}
	void setSeconds(const  int& s) {_seconds = s;}
};

	ostream& operator<<(ostream&, const Time&);
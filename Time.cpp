#include <iostream>
#include <ctime>
using namespace std;
#include "Time.h"

void Time::normalizeTime()
	{
	if(_hours>24){
		throw "Time is incorrect";
	}
	_hours+=(_minutes/60+(_seconds/3600));
	_minutes+=(_seconds/60);
	_seconds%=60;
	}


Time:: Time() {
	time_t t = time(0);
	struct tm * now = localtime(&t);
	_hours =  (now->tm_hour);
	_minutes = (now->tm_min);
	_seconds = (now->tm_sec);
	return;
}

Time::Time (int s, int m, int h):
	_seconds(s),_minutes(m),_hours(h)
	{
		return;
	}

Time:: Time (const Time& t):
_seconds(t.seconds()),_minutes(t.minutes()),_hours(t.hours())
	{
		return;
	}
//forGit
Time& Time::operator=(const Time& t)
	{
	_seconds=t.seconds();
	_minutes=t.minutes();
	_hours=t.hours();

	return *this;
	}

ostream& operator<<(ostream& os, const Time & t)
	{
	os << t.hours() << ':' << t.minutes() << ':' << t.seconds(); 
	return os;
	}
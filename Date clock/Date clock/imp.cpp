#include <iostream>
#include <string>
#include "headerFileClockType.h"
#include "headerFileDayClock.h"
#include "headerFileDateClock.h"
using namespace std;

// ************************************************************************
// ******************** clockType Functions definition ********************
// ************************************************************************

// ******************** setTime ********************
void clockType::setTime(int hours, int minutes, int seconds)
{
	if (0 <= hours && hours < 24)
		hr = hours;
	else
		hr = 0;
	if (0 <= minutes && minutes < 60)
		min = minutes;
	else
		min = 0;
	if (0 <= seconds && seconds < 60)
		sec = seconds;
	else
		sec = 0;
} // end func -setTime-

// ******************** getTime ********************
void clockType::getTime(int& hours, int& minutes,
int& seconds) const
{
	hours = hr;
	minutes = min;
	seconds = sec;
} // end fun -getTime-

// ******************** printTime ********************
void clockType::printTime() const
{
	if (hr < 10)
		cout << "0";
	cout << hr << ":";
	if (min < 10)
		cout << "0";
	cout << min << ":";
	if (sec < 10)
		cout << "0";
	cout << sec << endl;
} // end fun -printTime-

// ******************** incHr ********************
void clockType::incHr()
{
	hr++;
	if (hr > 23)
		hr = 0;
} // end fun -incHr-

// ******************** incMin ********************
void clockType::incMin()
{
	min++;
	if (min > 59)
	{
		min = 0;
		incHr(); //increment hours
	}
} // end fun -incMin-

// ******************** incSec ********************
void clockType::incSec()
{
	sec++;
	if (sec > 59)
	{
		sec = 0;
		incMin(); //increment minutes
	}
} // end fun -incSec-

// ******************** equalTime ********************
bool clockType::equalTime(const clockType& otherClock) const
{
	return (hr == otherClock.hr && min == otherClock.min && sec == otherClock.sec);
} // end fun -equalTime-

// ******************** clockType ********************
clockType::clockType()
{
	setTime(0,0,0);
} // end constructor without parameters

// ******************** clockType ********************
clockType::clockType(int h, int m, int s)
{
	setTime(h, m, s);
} // end constructor with parameters

// ******************** ~clockType ********************
clockType::~clockType()
{
	cout << "\n*** in clockType destructor, Good bye object !! ***\n";
} // end destructor

// ************************************************************************
// ******************** dayClock Functions definition *********************
// ************************************************************************

// ******************** dayClock ********************
dayClock::dayClock():clockType()
{
	day = "Friday";
} // end constructor without parameters

// ******************** dayClock ********************
dayClock::dayClock(int h, int m, int s, string d):clockType(h, m, s)
{
	day = d;
} // end constructor with parameters

// ******************** ~dayClock ********************
dayClock::~dayClock()
{	
	cout << "\n &&& in dayClock destructor, Good bye object !! &&&\n";
} // end destructor

// ******************** printTime ********************
void dayClock::printTime() const
{
	clockType::printTime();
	cout << "day = " << day << endl;
} // end fun-printTime-

// ************************************************************************
// ******************** dateClock Functions definition *********************
// ************************************************************************

// ******************** dateClock ********************
dateClock::dateClock():dayClock()
{
	ddate = 1;
	month = 1;
	year = 2000;
} // end constructor without parameters

// ******************** dateClock ********************
dateClock::dateClock(int h, int m, int s, string d, int ddate, int month, int year):dayClock(h, m, s, d)
{
	// since the formal parametres have the same name as the data member,
	// we need to know which is which !!
	dateClock::ddate = ddate;
	dateClock::month = month;
	dateClock::year = year;
} // end constructor with parameters

// ******************** ~dateClock ********************
dateClock::~dateClock()
{	
	cout << "\n %%% in dateClock destructor, Good bye object !! %%%\n";
} // end destructor

// ******************** printTime ********************
void dateClock::printTime() const
{
	dayClock::printTime();
	cout << "date = ";
	cout << ddate << "/";
	cout << month << "/";
	cout << year << endl;
} // end fun-printTime-
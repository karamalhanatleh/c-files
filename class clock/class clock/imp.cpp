#include <iostream>
#include "headerFileClockType.h"
using namespace std;

// ******************** Functions definition ********************
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
void clockType::getTime(int & hours , int & minutes ,int & seconds) const
{

}
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
	cout << "\n*** in destructor, Good bye object !! ***\n";
} // end constructor without parameters